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

int Personaje::getsalud() const {
    return salud;
}
void Personaje::setsalud(int lvl) {
    this-> salud = salud;
}
int Personaje::getmana() const {
    return mana;
}
void Personaje::setmana(int lvl) {
    this-> mana = mana;
}

void Personaje::addHabilidades(Habilidad){
    Habilidad *p = new BolaDeFuego(8);
    Habilidades.push_back(p);
    std::cout << "Bola de Fuego Agregado al arbol de Habilidades" << std::endl;

    Habilidad *o = new Curar(4);
    Habilidades.push_back(o);
    std::cout << "Curar Agregado al arbol de Habilidades" << std::endl;
}

Personaje::~Personaje() {
    std::cout << "Personaje Destruido" << std::endl;
}
