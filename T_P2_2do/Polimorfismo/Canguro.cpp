//
// Created by Diego on 02/05/2024.
//

#include "Canguro.h"

Canguro::Canguro() : Animal(){
    this-> canjump = "N/A";
    this-> canfight = "N/A";
};

Canguro::Canguro(std::string name, int age, float height, float weight, bool canjump, bool canfight) : Animal(name, age, height, weight){
    this-> canjump = canjump;
    this-> canfight = canfight;
}

Canguro::Canguro(const Canguro &rhs):Animal(rhs){
    canjump = rhs.canjump;
    canfight = rhs.canfight;
}

void Canguro::makeSound(){
    std::cout << "Wrom!" << std::endl;
}
