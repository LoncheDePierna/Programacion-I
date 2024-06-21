//
// Created by Alumnos on 20/06/2024.
//

#include "Jugador.h"

    Jugador::Jugador() : Inventario(), BolaDeFuego(), Personaje(): Curar(){}
    Jugador::Jugador(std::string nombre, int salud, int dano, int mana) : Inventario(), BolaDeFuego(), Personaje(nombre, salud, dano, mana){}


void Jugador::mostrarInfo() {
    std::cout << "Nombre: " << getNombre() << " Salud: " << getSalud() << " Dano: " << getDano() << " Mana: " << getMana() << std::endl;
    mostrarItem();
    mostrarHabilidad();
}

Jugador::~Jugador(){
    std::cout << std::endl << "Jugador destruido" << std::endl;
}