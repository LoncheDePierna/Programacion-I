#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

int main(){

    sf::RenderWindow window(sf::VideoMode(1200,800),"Totis Pong");

    sf::Font font;
    if(!font.loadFromFile("../Minecraft.ttf")){
        std::cout<<"Error en la fuente"<<std::endl;
    }

    sf::Text text[2];
    std::string score[11] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

    sf::Color Colores[2] = {sf::Color::Cyan, sf::Color::Magenta};

    for (int i = 0; i < 2; i++){
        text[i].setFont(font);
        text[i].setCharacterSize(28);
        text[i].setString(score[0]);
        text[i].setFillColor(Colores[i]);
    }

    text[0].setPosition(window.getSize().x * 0.25,60);
    text[1].setPosition(window.getSize().x * 0.75,60);

    sf::RectangleShape player1(sf::Vector2f(15,120));
    player1.setFillColor(Colores[0]);
    player1.setPosition(sf::Vector2f(window.getSize().x * 0.01,window.getSize().y * 0.45));

    sf::RectangleShape player2(sf::Vector2f(15,120));
    player2.setFillColor(Colores[1]);
    player2.setPosition(sf::Vector2f(window.getSize().x * 0.99 - player2.getSize().x,window.getSize().y * 0.45));

    sf::CircleShape ball(10);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(sf::Vector2f(window.getSize().x * 0.5 - ball.getRadius(),window.getSize().y * 0.5 - ball.getRadius()));

    sf::RectangleShape lines(sf::Vector2f(5,10));
    lines.setFillColor(sf::Color::White);


    sf::Vector2f playerSpeed(0.0f,0.1f);
    sf::Vector2f movement(0.05f,0.025f);
    int scoreP1 = 0;
    int scoreP2 = 0;
    /*
    velocidad.x += (velocidad.x > 0)? 0.05 : -0.05;
    velocidad.y += (velocidad.y > 0)? 0.03 : -0.03;
    */

    sf::Event event;

    // Loop principal
    while (window.isOpen()) {

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        if(ball.getPosition().x < -50){
            scoreP2++;
            text[1].setString(score[scoreP2]);
            ball.setPosition(sf::Vector2f(window.getSize().x * 0.5 - ball.getRadius(),window.getSize().y * 0.5 - ball.getRadius()));
            movement.x = -movement.x;
            movement.y = -movement.y;
        }

        if(ball.getPosition().x > window.getSize().x){
            scoreP1++;
            text[0].setString(score[scoreP1]);
            ball.setPosition(sf::Vector2f(window.getSize().x * 0.5 - ball.getRadius(),window.getSize().y * 0.5 - ball.getRadius()));
            movement.x = -movement.x;
        }

        if(ball.getPosition().y + (2 * ball.getRadius()) > window.getSize().y || ball.getPosition().y < 0){
            movement.y = -movement.y;
        }

        if (ball.getGlobalBounds().intersects(player1.getGlobalBounds())) {
            movement.x = -movement.x;
            movement.x += (movement.x > 0) ? 0.015 : -0.015;
        }
        if (ball.getGlobalBounds().intersects(player2.getGlobalBounds())) {
            movement.x = -movement.x;
            movement.x += (movement.x > 0) ? 0.015 : -0.015;
        }

        // Controles del player 1
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && player1.getPosition().y > 0) {
            player1.move(-playerSpeed);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && player1.getPosition().y + player1.getSize().y < window.getSize().y) {
            player1.move(playerSpeed);
        }

        // Controles del player 2
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && player2.getPosition().y > 0) {
            player2.move(-playerSpeed);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && player2.getPosition().y + player2.getSize().y < window.getSize().y) {
            player2.move(playerSpeed);
        }

        // Limpiar pantalla
        window.clear(sf::Color::Black);

        int y = 5;

        for (int i = 0; i < (window.getSize().y / 10); i++){

            lines.setPosition(sf::Vector2f(window.getSize().x * 0.5 - lines.getSize().x,y));
            window.draw(lines);
            y += 30;
        }

        ball.move(movement);

        window.draw(text[0]);
        window.draw(text[1]);
        window.draw(player1);
        window.draw(player2);
        window.draw(ball);

        // Display the contents of the window
        window.display();

    }

    return 0;
}

