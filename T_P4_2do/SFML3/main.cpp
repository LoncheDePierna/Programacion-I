#include <SFML/Graphics.hpp>
#include "Poligono.h"

int main() {

    // Create a window with the title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Window");

    Poligono cuadrado(4,100);
    cuadrado.setFillColor(sf::Color::Green);
    cuadrado.setPosition(150,400);

    Poligono octagono(8,100);
    octagono.setFillColor(sf::Color::Yellow);
    octagono.setPosition(400,400);

    Poligono pentadecagono(15,100);
    pentadecagono.setFillColor(sf::Color::Cyan);
    pentadecagono.setPosition(650,400);


    // Main loop that continues until the window is closed
    while (window.isOpen()) {
        sf::Event event;
        // Process events
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);

        // Display the contents of the window
        window.draw(cuadrado);
        window.draw(octagono);
        window.draw(pentadecagono);

        window.display();
    }

    return 0;
}
