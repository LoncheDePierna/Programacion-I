//
// Created by Diego on 30/04/2024.
//

#include "Avestruz.h"

Avestruz::Avestruz() : Animal(){
    this-> colorOjos = "N/A";
    this-> numeroPatas = "N/A";
};

Avestruz::Avestruz(std::string name, int age, float height, float weight, std::string raza, std::string numeroPatas) : Animal(name, age, height, weight){
    this-> colorOjos = raza;
    this-> numeroPatas = colorOjos;
}

Avestruz::Avestruz(const Avestruz &rhs):Animal(rhs){
    colorOjos = rhs.colorOjos;
    numeroPatas = rhs.numeroPatas;
}

void Avestruz::makeSound(){
    std::cout << "Mnwah!" << std::endl;
}
