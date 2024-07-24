#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <random>
#include <chrono>
#include <thread>

int main(){

    // Generador de números aleatorios
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, 1);

    // Creamos la ventana
    unsigned int width = 1200;
    unsigned int height = 800;
    sf::RenderWindow window(sf::VideoMode(width,height),"Totis Pong");

    // Cargamos la fuente
    sf::Font font;
    if(!font.loadFromFile("../Minecraft.ttf")){
        std::cout<<"Error en la fuente"<<std::endl;
    }

    // Cargamos los sonidos
    sf::Music scoreSound;
    if (!scoreSound.openFromFile("../Score.wav")) {
        std::cout<<"Error en el sonido"<<std::endl;
    }
    sf::Music winSound;
    if (!winSound.openFromFile("../Win.wav")) {
        std::cout<<"Error en el sonido"<<std::endl;
    }
    sf::Music bounceSound;
    if (!bounceSound.openFromFile("../Bounce.wav")) {
        std::cout<<"Error en el sonido"<<std::endl;
    }

    // Creamos los arreglos para los textos, tamaños y colores
    sf::Text text[4];
    std::string score[9] = {"PLAYER 1 WIN", "PLAYER 2 WIN", "0", "0", "1", "2", "3", "4", "5"};
    sf::Color Colores[5] = {sf::Color::Cyan, sf::Color::Magenta, sf::Color::Cyan, sf::Color::Magenta, sf::Color::Black};
    int fontsize[4] = {84, 84, 28, 28};

    // Añadimos formato a los 2 textos
    for (int i = 0; i < 4; i++){
        text[i].setFont(font);
        text[i].setCharacterSize(fontsize[i]);
        text[i].setString(score[i]);
        text[i].setFillColor(Colores[i]);
    }
    // Posicionamos los marcadores y textos de victoria de los jugadores
    sf::FloatRect textOrigin[2] = { text[0].getLocalBounds(), text[1].getLocalBounds()};
    text[0].setOrigin(textOrigin[0].left + textOrigin[0].width * 0.5f,textOrigin[0].top + textOrigin[0].height * 0.5f);
    text[0].setPosition(static_cast<float>(width) * 0.5f,static_cast<float>(height) * 0.45f);
    text[1].setPosition(static_cast<float>(width) * 0.5f,static_cast<float>(height) * 0.45f);
    text[1].setOrigin(textOrigin[1].left + textOrigin[1].width * 0.5f,textOrigin[1].top + textOrigin[1].height * 0.5f);
    text[2].setPosition(static_cast<float>(width) * 0.25f,60);
    text[3].setPosition(static_cast<float>(width) * 0.75f,60);

    // Rectangulo del jugador 1
    sf::RectangleShape player1(sf::Vector2f(15,120));
    player1.setFillColor(Colores[0]);
    player1.setPosition(sf::Vector2f(static_cast<float>(width) * 0.01f,static_cast<float>(height) * 0.45f));
    // Rectangulo del jugador 2
    sf::RectangleShape player2(sf::Vector2f(15,120));
    player2.setFillColor(Colores[1]);
    player2.setPosition(sf::Vector2f(static_cast<float>(width) * 0.99f - player2.getSize().x,static_cast<float>(height) * 0.45f));
    // Pelota
    sf::CircleShape ball(10);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(sf::Vector2f(static_cast<float>(width) * 0.5f - ball.getRadius(),static_cast<float>(height) * 0.5f - ball.getRadius()));
    // Lineas divisoras
    sf::RectangleShape lines(sf::Vector2f(5,10));
    lines.setFillColor(sf::Color::White);


    // Vector de movimiento jugador
    sf::Vector2f playerSpeed(0.0f,0.1f);
    // Vector de movimiento inicial para la bola
    sf::Vector2f originalMovement(0.05f,0.025f);
    // Vector de movimiento para la bola
    sf::Vector2f movement = originalMovement;
    // Scores de los jugadores
    int scoreP1 = 3;
    int scoreP2 = 3;

    sf::Event event;

    // Loop principal
    while (window.isOpen()) {

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Si la pelota pasa por el lado izquierdo jugador 2 recibe 1 punto y vuelve al centro
        if(ball.getPosition().x < -50){
            if(scoreP2 < 8){
                scoreP2++;
                scoreSound.play();
                scoreSound.setPlayingOffset(sf::Time::Zero);
            }

            text[3].setString(score[scoreP2]);
            ball.setPosition(sf::Vector2f(static_cast<float>(width) * 0.5f - ball.getRadius(),static_cast<float>(height) * 0.5f - ball.getRadius()));

            // Reseteamos la velocidad y aleatorizamos la dirección
            movement = originalMovement;
            movement.x *= (distribution(generator) == 0) ? 1 : -1;
            movement.y *= (distribution(generator) == 0) ? 1 : -1;
        }
        // Si la pelota pasa por el lado derecho jugador 1 recibe 1 punto y vuelve al centro
        if(ball.getPosition().x > static_cast<float>(width)){
            if(scoreP1 < 8){
                scoreP1++;
                scoreSound.play();
                scoreSound.setPlayingOffset(sf::Time::Zero);
            }
            text[2].setString(score[scoreP1]);
            ball.setPosition(sf::Vector2f(static_cast<float>(width) * 0.5f - ball.getRadius(),static_cast<float>(height) * 0.5f - ball.getRadius()));

            // Reseteamos la velocidad y aleatorizamos la dirección
            movement = originalMovement;
            movement.x *= (distribution(generator) == 0) ? 1 : -1;
            movement.y *= (distribution(generator) == 0) ? 1 : -1;
        }
        // Rebote superior eh inferior
        if(ball.getPosition().y + (2 * ball.getRadius()) > static_cast<float>(height) || ball.getPosition().y < 0){
            movement.y = -movement.y;
        }

        // Rebote del rectangulo izquierdo
        if (ball.getGlobalBounds().intersects(player1.getGlobalBounds())) {
            movement.x = -movement.x;
            movement.x += (movement.x > 0) ? 0.015 : -0.015;
            bounceSound.play();
            bounceSound.setPlayingOffset(sf::Time::Zero);
        }
        // Rebote del rectangulo derecho
        if (ball.getGlobalBounds().intersects(player2.getGlobalBounds())) {
            movement.x = -movement.x;
            movement.x += (movement.x > 0) ? 0.015 : -0.015;
            bounceSound.play();
            bounceSound.setPlayingOffset(sf::Time::Zero);
        }

        // Controles del player 1
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && player1.getPosition().y > 0) {
            player1.move(-playerSpeed);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && player1.getPosition().y + player1.getSize().y < static_cast<float>(height)) {
            player1.move(playerSpeed);
        }

        // Controles del player 2
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && player2.getPosition().y > 0) {
            player2.move(-playerSpeed);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && player2.getPosition().y + player2.getSize().y < static_cast<float>(height)) {
            player2.move(playerSpeed);
        }

        if (scoreP1 == 8){
            // Jugador 1 gana
            window.clear(sf::Color::Black);
            window.draw(text[0]);
            window.draw(player1);
            window.draw(player2);
            winSound.play();
            winSound.setPlayingOffset(sf::Time::Zero);
            window.display();
            //Espera 5 segundos
            std::this_thread::sleep_for(std::chrono::seconds(5));
            // Reinicia el juego
            scoreP1 = 3;
            scoreP2 = 3;
            text[2].setString(score[scoreP1]);
            text[3].setString(score[scoreP2]);
            window.draw(text[2]);
            window.draw(text[3]);
            movement = originalMovement;
        }
        if (scoreP2 == 8){
            // Jugador 2 gana
            window.clear(sf::Color::Black);
            window.draw(text[1]);
            window.draw(player1);
            window.draw(player2);
            winSound.play();
            winSound.setPlayingOffset(sf::Time::Zero);
            window.display();
            //Espera 5 segundos
            std::this_thread::sleep_for(std::chrono::seconds(5));
            // Reinicia el juego
            scoreP1 = 3;
            scoreP2 = 2;
            text[2].setString(score[scoreP1]);
            text[3].setString(score[scoreP2]);
            window.draw(text[2]);
            window.draw(text[3]);
            movement = originalMovement;
            window.display();
        }

        // Limpiar pantalla
        window.clear(sf::Color::Black);

        // Dibujamos las lineas divisoras
        float y = 5;
        for (int i = 0; i < (window.getSize().y / 10); i++){

            lines.setPosition(sf::Vector2f(static_cast<float>(width) * 0.5f - lines.getSize().x,y));
            window.draw(lines);
            y += 30;
        }

        ball.move(movement);
        window.draw(text[2]);
        window.draw(text[3]);
        window.draw(player1);
        window.draw(player2);
        window.draw(ball);

        // Display the contents of the window
        window.display();

    }

    return 0;
}

