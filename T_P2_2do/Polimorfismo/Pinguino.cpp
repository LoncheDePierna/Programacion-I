//
// Created by Diego on 02/05/2024.
//

#include "Pinguino.h"

Pinguino::Pinguino() : Animal(){
    this-> canfly = true;
    this-> canswim = true;
};

Pinguino::Pinguino(std::string name, int age, float height, float weight, bool canfly, bool canswim) : Animal(name, age, height, weight){
    this-> canfly = canfly;
    this-> canswim = canswim;
}

Pinguino::Pinguino(const Pinguino &rhs):Animal(rhs){
    canfly = rhs.canfly;
    canswim = rhs.canswim;
}

void Pinguino::makeSound(){
    std::cout << "Meek!" << std::endl;
}
