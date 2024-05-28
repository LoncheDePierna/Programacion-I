//
// Created by Alumnos on 28/05/2024.
//

#include "Persona.h"
#include <iostream>

Persona::Persona() {
    this -> death = true;
    this -> men = true;
}

Persona::Persona(bool death, bool men) {
    this -> death = death;
    this -> men = men;
}

Persona::Persona(const Persona& rhs) {
    this -> death = rhs.death;
    this -> men = rhs.men;

}

Persona::~Persona() {
    std::cout << "Persona Destruida" << std::endl;
}