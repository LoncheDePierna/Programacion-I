//
// Created by Alumnos on 11/06/2024.
//

#include "Mago.h"

Mago::Mago() : PersonajeVideojuego(){
    this-> lvlMana = 0;
    this-> lvlHechizeria = 0;
};

Mago::Mago(int lvl, int vida, std::string nombre, std::string gender, int lvlMana, int lvlHechizeria) : PersonajeVideojuego(lvl, vida, nombre, gender){
    this-> lvlMana = lvlMana;
    this-> lvlHechizeria = lvlHechizeria;
}

int Mago::getlvlMana() const {
    return lvlMana;
}
void Mago::setlvlMana(int lvlMana) {
    this-> lvlMana = lvlMana;
}
int Mago::getlvlHechizeria() const {
    return lvlHechizeria;
}
void Mago::setlvlHechizeria(int lvlHechizeria) {
    this-> lvlHechizeria = lvlHechizeria;
}

    void Mago::Ataque() {
    std::cout << "FireBall!" << std::endl;
}

Mago::~Mago(){
    std::cout << "Mago destruido";
}