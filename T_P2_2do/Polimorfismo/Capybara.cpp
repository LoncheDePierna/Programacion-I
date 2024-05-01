//
// Created by Alumnos on 30/04/2024.
//

#include "Capybara.h"

Capybara::Capybara() : Animal(){
    this-> comportamiento = "N/A";
    this-> dieta = "N/A";
};

Capybara::Capybara(std::string name, int age, float height, float weight, std::string comportamiento, std::string dieta) : Animal(name, age, height, weight){
    this-> comportamiento = comportamiento;
    this-> dieta = dieta;
}

Capybara::Capybara(const Capybara &rhs):Animal(rhs){
    comportamiento = rhs.comportamiento;
    dieta = rhs.dieta;
}

void Capybara::makeSound(){
    std::cout << "Mgheg!" << std::endl;
}