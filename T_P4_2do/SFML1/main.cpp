// Include the necessary headers
#include <SFML/Graphics.hpp>

int main() {
    // Create a window with the title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Window");

    sf::ConvexShape triangle(3);
    triangle.setPoint(0,sf::Vector2f(10,110));
    triangle.setPoint(1,sf::Vector2f(55,10));
    triangle.setPoint(2,sf::Vector2f(110,110));
    triangle.setFillColor(sf::Color::Cyan);

    sf::RectangleShape square(sf::Vector2f (100,100));
    square.setFillColor(sf::Color::Magenta);
    square.setPosition(690, 10);

    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(10,690);

    sf::ConvexShape star(10);
    star.setPoint(0,sf::Vector2f(100,25));
    star.setPoint(1,sf::Vector2f(115,75));
    star.setPoint(2,sf::Vector2f(150, 75));
    star.setPoint(3,sf::Vector2f(120, 100));
    star.setPoint(4,sf::Vector2f(135, 150));
    star.setPoint(5,sf::Vector2f(100, 125));
    star.setPoint(6,sf::Vector2f(65, 150));
    star.setPoint(7,sf::Vector2f(79, 100));
    star.setPoint(8,sf::Vector2f(50, 75));
    star.setPoint(9,sf::Vector2f(86, 75));
    star.setFillColor(sf::Color::Yellow);
    star.setPosition(640,640);

    sf::Color brown(181,89,47);

    sf::RectangleShape blue(sf::Vector2f (50,100));
    blue.setFillColor(sf::Color::Blue);
    blue.setPosition(325, 350);
    sf::RectangleShape white(sf::Vector2f (50,100));
    white.setFillColor(sf::Color::White);
    white.setPosition(375, 350);
    sf::RectangleShape red(sf::Vector2f (50,100));
    red.setFillColor(sf::Color::Red);
    red.setPosition(425, 350);
    sf::RectangleShape asta(sf::Vector2f (15,200));
    asta.setFillColor(brown);
    asta.setPosition(310, 350);
    sf::CircleShape astacircle(7.5);
    astacircle.setFillColor(brown);
    astacircle.setPosition(310, 342.5);

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
        window.draw(triangle);
        window.draw(square);
        window.draw(circle);
        window.draw(star);
        window.draw(blue);
        window.draw(white);
        window.draw(red);
        window.draw(asta);
        window.draw(astacircle);

        window.display();
    }

    return 0;
}