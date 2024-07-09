#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>



int main(){

    sf::RenderWindow window(sf::VideoMode(800,800),"Frase pro");

    sf::Texture dvdLogoTexture;
    if (!dvdLogoTexture.loadFromFile("../dvd.png")) {
        std::cerr << "Failed to load DVD logo image" << std::endl;
    }

    sf::RectangleShape rectangulo(sf::Vector2f(193, 79));
    rectangulo.setTexture(&dvdLogoTexture);
    rectangulo.setPosition(300, 150);


    sf::Event event;
    sf::Vector2f movement(0.1f,0.1f);
    int rebote = 0;

    // Loop principal
    while (window.isOpen()) {

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        if(rectangulo.getPosition().x + rectangulo.getSize().x > window.getSize().x || rectangulo.getPosition().x < 0){
            movement.x = -movement.x;
            rebote++;
        }

        if(rectangulo.getPosition().y + rectangulo.getSize().y > window.getSize().y || rectangulo.getPosition().y < 0){
            movement.y = -movement.y;
            rebote++;
        }

        if (rebote == 0) {
            rectangulo.setFillColor(sf::Color::Red);
        } else if (rebote == 1) {
            rectangulo.setFillColor(sf::Color::Green);
        } else if (rebote == 2) {
            rectangulo.setFillColor(sf::Color::Blue);
            rebote -= 3;
        }

        // Limpiar pantalla

        rectangulo.move(movement);


        window.clear(sf::Color::Black);

        window.draw(rectangulo);

        // Display the contents of the window
        window.display();

    }

    return 0;
}