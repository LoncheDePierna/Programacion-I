//
// Created by Alumnos on 11/06/2024.
//

#include "Guerrero.h"

Guerrero::Guerrero() : PersonajeVideojuego(), Inventario(){
    this-> lvlFuerza = 0;
    this-> lvlDestreza = 0;
};

Guerrero::Guerrero(int lvl, int vida, std::string nombre, std::string gender, int lvlFuerza, int lvlDestreza) : PersonajeVideojuego(lvl, vida, nombre, gender){
    this-> lvlFuerza = lvlFuerza;
    this-> lvlDestreza = lvlDestreza;
}

int Guerrero::getlvlFuerza() const {
    return lvlFuerza;
}
void Guerrero::setlvlFuerza(int lvlFuerza) {
    this-> lvlFuerza = lvlFuerza;
}
int Guerrero::getlvlDestreza() const {
    return lvlDestreza;
}
void Guerrero::setlvlDestreza(int lvlDestreza) {
    this-> lvlDestreza = lvlDestreza;
}

void Guerrero::Ataque() {
    std::cout << "Slash!" << std::endl;
}

Guerrero::~Guerrero(){
    std::cout << "Guerrero destruido";
}