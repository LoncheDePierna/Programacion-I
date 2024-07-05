// Include the necessary headers
#include <SFML/Graphics.hpp>
#include <cmath>

int main() {

    // Create a window with the title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Window");

    double R = 200;
    double i = 20;
    sf::ConvexShape shape(i);
    // Isodecágono
    for (int _i = 0; _i < i; _i++){

        double x = R * cos((2 * M_PI * _i) / i);
        double y = R * sin((2 * M_PI * _i) / i);
        shape.setPoint(_i,sf::Vector2f(x,y));
    }
    shape.setFillColor(sf::Color::Cyan);
    shape.setPosition(400,400);

    // Pa que se vea más bonito
    sf::ConvexShape inShape(i);
    for (int _i = 0; _i < i; _i++){

        double x = (R - R * 0.1) * cos((2 * M_PI * _i) / i);
        double y = (R - R * 0.1) * sin((2 * M_PI * _i) / i);
        inShape.setPoint(_i,sf::Vector2f(x,y));
    }
        inShape.setFillColor(sf::Color::Black);
        inShape.setPosition(400,400);

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
        window.draw(shape);
        window.draw(inShape);

        window.display();
    }

    return 0;
}
