//
// Created by Diego on 10/07/2024.
//

#ifndef SFML3_POLIGONO_H
#define SFML3_POLIGONO_H

#include <SFML/Graphics.hpp>

class Poligono : public sf::ConvexShape{

public:
    Poligono();
    Poligono(double i, double R);
    virtual ~Poligono();

private:
    double i, R;
};


#endif //SFML3_POLIGONO_H
