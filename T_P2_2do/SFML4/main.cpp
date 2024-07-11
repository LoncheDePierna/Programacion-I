#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window(sf::VideoMode(1000,1000),"Texto de ejemplo xd");
    sf::Font font;
    if(!font.loadFromFile("../arial.ttf")){
        std::cout<<"Error en la fuente"<<std::endl;
    }
    sf::Text text[11];
    std::string texto[11] = {"Blue", "Cyan","Green", "Magenta", "Red","Yellow", "White", "Blue", "Cyan","Green", "Magenta"};

    sf::Text position[11];
    std::string posicion[11] = {"(100,100)","(150,800)","(300,900)","(600,850)","(900,400)","(550,700)","(350,650)","(400,500)","(250,350)","(450,150)","(600,100)"};

    sf::Color Colores[11] = {sf::Color::Blue, sf::Color::Cyan,sf::Color::Green, sf::Color::Magenta, sf::Color::Red,sf::Color::Yellow, sf::Color::White, sf::Color::Blue, sf::Color::Cyan, sf::Color::Green, sf::Color::Magenta};

    for (int i = 0; i < 11; i++){
        text[i].setFont(font);
        text[i].setCharacterSize(18);
        text[i].setString(texto[i]);
        text[i].setFillColor(Colores[i]);
        position[i].setFont(font);
        position[i].setCharacterSize(15);
        position[i].setString(posicion[i]);
        position[i].setFillColor(Colores[i]);
    }

    text[0].setPosition(82,60);
    position[0].setPosition(70,80);
    text[1].setPosition(110,800);
    position[1].setPosition(100,820);
    text[2].setPosition(280,900);
    position[2].setPosition(274,920);
    text[3].setPosition(600,860);
    position[3].setPosition(604,880);
    text[4].setPosition(922,380);
    position[4].setPosition(908,400);
    text[5].setPosition(450,687);
    position[5].setPosition(447,707);
    text[6].setPosition(310,653);
    position[6].setPosition(302,673);
    text[7].setPosition(420,470);
    position[7].setPosition(407,490);
    text[8].setPosition(190,330);
    position[8].setPosition(180,350);
    text[9].setPosition(406,100);
    position[9].setPosition(400,120);
    text[10].setPosition(615,70);
    position[10].setPosition(617,90);

    sf::VertexArray absractShape(sf::TriangleStrip,11);
    absractShape[0].position = sf::Vector2f (100,100);
    absractShape[1].position = sf::Vector2f (150,800);
    absractShape[2].position = sf::Vector2f (300,900);
    absractShape[3].position = sf::Vector2f (600,850);
    absractShape[4].position = sf::Vector2f (900,400);
    absractShape[5].position = sf::Vector2f (550,700);
    absractShape[6].position = sf::Vector2f (350,650);
    absractShape[7].position = sf::Vector2f (400,500);
    absractShape[8].position = sf::Vector2f (250,350);
    absractShape[9].position = sf::Vector2f (450,150);
    absractShape[10].position = sf::Vector2f (600,100);

    for (int i = 0; i < 11; i++){
        absractShape[i].color = Colores[i];
    }

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

        window.draw(absractShape);

        for (int i = 0; i < 11; i++){
            window.draw(text[i]);
            window.draw(position[i]);
        }

        // Display the contents of the window
        window.display();
    }

    return 0;
}
