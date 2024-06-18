//
// Created by Alumnos on 18/06/2024.
//

#include "Personaje.h"

Personaje::Personaje(){
    this -> salud = 0;
    this -> mana = 0;
}

Personaje::Personaje(int salud, int mana) {
    this -> salud = salud;
    this -> mana = salud;
}

int Personaje::getlvl() const {
    return lvl;
}
void Personaje::setlvl(int lvl) {
    this-> lvl = lvl;
}
int Personaje::getvida() const {
    return vida;
}
void Personaje::setvida(int lvl) {
    this-> vida = vida;
}

void PersonajeVideojuego::addHabilidades(Habilidad){
    Habilidad *p = new BolaDeFuego(8);
    Habilidades.push_back(p);
    std::cout << p << " Agregado al arbol de Habilidades" << std::endl;

    Habilidad *o = new Curar(4);
    Habilidades.push_back(o);
    std::cout << o << " Agregado al arbol de Habilidades" << std::endl;
}

PersonajeVideojuego::~PersonajeVideojuego() {
    std::cout << "PersonajeVideojuego Destruido" << std::endl;
}
