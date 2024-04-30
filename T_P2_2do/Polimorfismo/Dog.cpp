//
// Created by Alumnos on 09/04/2024.
//

#include "Dog.h"

Dog::Dog() : Animal(){
    this-> raza = "N/A";
    this-> color = "N/A";
};

Dog::Dog(std::string name, int age, float height, float weight, std::string raza, std::string color) : Animal(name, age, height, weight){
    this-> raza = raza;
    this-> color = color;
}

Dog::Dog(const Dog &rhs):Animal(rhs){
    raza = rhs.raza;
    color = rhs.color;
}

void Dog::makeSound(){
    std::cout << "Woof" << std::endl;
}
