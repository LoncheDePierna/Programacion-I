//
// Created by Alumnos on 20/06/2024.
//

#include "Enemigo.h"

Enemigo::Enemigo() {
    this -> dano = 0;
    this ->armadura = 0;
}
Enemigo::Enemigo(std::string nombre, int salud, int dano, int armadura) : Entidad(nombre, salud) {
    this -> dano = dano;
    this -> armadura = armadura;
}

int Enemigo::getDano() const {
    return dano;
}
int Enemigo::getArmadura() const {
    return armadura;
}

void Enemigo::mostrarInfo() {
    std::cout << "Nombre: " << getNombre() << " Salud: " << getSalud() << " Dano: " << getDano() << " Armadura: " << getArmadura() << std::endl;
}

Enemigo::~Enemigo(){
    std::cout << "Enemigo destruido" << std::endl;
}