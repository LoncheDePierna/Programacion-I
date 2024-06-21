//
// Created by Alumnos on 20/06/2024.
//

#include "Personaje.h"

    Personaje::Personaje() : Entidad(){
    this -> dano = 0;
    this ->mana = 0;
}
    Personaje::Personaje(std::string nombre, int salud, int dano, int mana) : Entidad(nombre, salud) {
    this -> dano = dano;
    this -> mana = mana;
}

int Personaje::getDano() const {
    return dano;
}
int Personaje::getMana() const {
    return mana;
}

void Personaje::mostrarInfo() {
    std::cout << "Nombre: " << getNombre() << " Salud: " << getSalud() << " Dano: " << getDano() << " Mana: " << getMana() << std::endl;
}

    Personaje::~Personaje(){
    std::cout << "Personaje destruido" << std::endl;
}