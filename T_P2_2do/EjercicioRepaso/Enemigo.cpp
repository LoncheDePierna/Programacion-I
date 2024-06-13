//
// Created by Alumnos on 11/06/2024.
//

#include "Enemigo.h"

Enemigo::Enemigo(){
    this -> dano = 0;
    this -> vida = 0;
}

Enemigo::Enemigo(int dano, int vida) {
    this -> dano = dano;
    this -> vida = vida;

}

int Enemigo::getdano() const {
    return dano;
}
void Enemigo::setdano(int dano) {
    this-> dano = dano;
}
int Enemigo::getvida() const {
    return vida;
}
void Enemigo::setvida(int vida) {
    this-> vida = vida;
}

void Enemigo::RecibirDano(int dano){
    vida -= dano;
    std::cout << "Recive Dano " << vida << std::endl;
}

Enemigo::~Enemigo() {
    std::cout << "Enemigo Destruido" << std::endl;
}
