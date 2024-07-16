#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

int main(){

    sf::RenderWindow window(sf::VideoMode(1000,800),"Totis Pong");

    sf::Font font;
    if(!font.loadFromFile("../Minecraft.ttf")){
        std::cout<<"Error en la fuente"<<std::endl;
    }

    sf::Text text[2];
    std::string score[11] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

    sf::Color Colores[2] = {sf::Color::Cyan, sf::Color::Magenta};

    for (int i = 0; i < 2; i++){
        text[i].setFont(font);
        text[i].setCharacterSize(18);
        text[i].setString(score[0]);
        text[i].setFillColor(Colores[i]);
    }

    text[0].setPosition(82,60);
    text[1].setPosition(110,800);

    sf::RectangleShape player1(sf::Vector2f(20,100));
    player1.setFillColor(Colores[0]);
    player1.setPosition(sf::Vector2f(20,450));

    sf::RectangleShape player2(sf::Vector2f(20,100));
    player2.setFillColor(Colores[1]);
    player2.setPosition(sf::Vector2f(960,450));


    sf::RectangleShape lines(sf::Vector2f(5,10));
    lines.setFillColor(sf::Color::White);


    sf::Vector2f velocidad;
    velocidad.x += (velocidad.x > 0)? 0.05 : -0.05;


    sf::Event event;

    // Loop principal
    while (window.isOpen()) {

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Limpiar pantalla
        window.clear(sf::Color::Black);

        int y = 5;

        for (int i = 0; i < (window.getSize().y / 10); i++){

            lines.setPosition(sf::Vector2f(497.5,y));
            window.draw(lines);
            y += 30;
        }

        // Display the contents of the window
        window.display();
    }

    return 0;
}

