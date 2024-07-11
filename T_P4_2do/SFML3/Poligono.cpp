//
// Created by Diego on 10/07/2024.
//

#include "Poligono.h"
#include <cmath>

    Poligono::Poligono() {
    this -> i = 0;
    this -> R = 0;
}

    Poligono::Poligono(double i, double R){
    this -> i = i;
    this -> R = R;

    setPointCount(i);

        for (int _i = 0; _i < i; _i++){

            double x = R * cos((2 * M_PI * _i) / i);
            double y = R * sin((2 * M_PI * _i) / i);
            setPoint(_i,sf::Vector2f(x,y));
        }
}

    Poligono::~Poligono() {
}

