//
// Created by Alumnos on 18/06/2024.
//

#include "BolaDeFuego.h"

    BolaDeFuego::BolaDeFuego() {
        this -> danio = 0;
}
    BolaDeFuego::BolaDeFuego(int danio) {
    this -> danio = danio;
}

void BolaDeFuego::usar() {
    std::cout << "Has usado la habilidad Bola de Fuego" << std::endl;
}


BolaDeFuego::~BolaDeFuego(){
    std::cout << "Bola destruida";
}