//
// Created by Alumnos on 20/06/2024.
//

#include "Jugador.h"

    Jugador::Jugador() : Inventario(){}

void Jugador::mostrarInfo() {
    std::cout << "Nombre: " << getNombre() << " Salud: " << getSalud() << "Dano: " << getDano() << " Mana: " << getMana() << std::endl;
    mostrarItem();
}

Jugador::~Jugador(){
    std::cout << "Jugador destruido" << std::endl;
}