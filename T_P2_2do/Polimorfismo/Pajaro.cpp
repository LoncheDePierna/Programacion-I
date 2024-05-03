//
// Created by Diego on 02/05/2024.
//

#include "Pajaro.h"

Pajaro::Pajaro() : Animal(){
    this-> puteggs = "N/A";
    this-> puteggs = "N/A";
};

Pajaro::Pajaro(std::string name, int age, float height, float weight, bool puteggs, bool canhear) : Animal(name, age, height, weight){
    this-> puteggs = puteggs;
    this-> canhear = canhear;
}

Pajaro::Pajaro(const Pajaro &rhs):Animal(rhs){
    puteggs = rhs.puteggs;
    canhear = rhs.canhear;
}

void Pajaro::makeSound(){
    std::cout << "Ahea!" << std::endl;
}
