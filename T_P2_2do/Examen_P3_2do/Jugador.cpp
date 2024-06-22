//
// Created by Alumnos on 20/06/2024.
//

#include "Jugador.h"

    Jugador::Jugador() : Inventario(), BolaDeFuego(), Personaje() {}
    Jugador::Jugador(std::string nombre, int salud, int dano, int mana) : Inventario(), BolaDeFuego(), Curar(), Personaje(nombre, salud, dano, mana){}


void Jugador::mostrarInfo() {
    std::cout << "Nombre: " << getNombre() << " Salud: " << getSalud() << " Dano: " << getDano() << " Mana: " << getMana() << std::endl;
    mostrarItem();
    BolaDeFuego().mostrarHabilidad();
}

Jugador::~Jugador(){
    std::cout << std::endl << "Jugador destruido" << std::endl;
}