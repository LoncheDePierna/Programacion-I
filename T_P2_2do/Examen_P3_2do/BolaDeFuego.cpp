//
// Created by Alumnos on 20/06/2024.
//

#include "BolaDeFuego.h"

BolaDeFuego::BolaDeFuego() : Habilidad(){
    this -> dano = 0;
}

BolaDeFuego::BolaDeFuego(std::string nombre, int costo, int dano) : Habilidad(nombre, costo){
    this -> dano = dano;
}

    void BolaDeFuego::usarHabilidad(std::string nombre){
    std::cout << "Has usado la Habilidad: " << nombre << std::endl;
}

    void BolaDeFuego::agregarHabilidad(std::string nombre){
    std::cout << "Has agregado la habilidad: " << nombre << std::endl;
}
    void BolaDeFuego::mostrarHabilidad(){
    std::cout << "Habilidades: Bola de Fuego" << std::endl;
}


BolaDeFuego::~BolaDeFuego(){
    std::cout << "Bola de Fuego destruida" << std::endl;
}