//
// Created by Diego on 02/05/2024.
//

#include "Gallina.h"

Gallina::Gallina() : Animal(){
    this-> canrun = true;
    this-> candig = true;
};

Gallina::Gallina(std::string name, int age, float height, float weight, bool canrun, bool candig) : Animal(name, age, height, weight){
    this-> canrun = canrun;
    this-> candig = candig;
}

Gallina::Gallina(const Gallina &rhs):Animal(rhs){
    canrun = rhs.canrun;
    candig = rhs.candig;
}

void Gallina::makeSound(){
    std::cout << "Paca!" << std::endl;
}
