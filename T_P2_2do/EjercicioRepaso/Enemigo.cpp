//
// Created by Alumnos on 11/06/2024.
//

#include "Enemigo.h"

Enemigo::Enemigo(){
    this -> lvlAmenaza = 0;
    this -> vida = 0;

}

Enemigo::Enemigo(int lvlAmenaza, int vida) {
    this -> lvlAmenaza = lvlAmenaza;
    this -> vida = vida;

}

void Enemigo::RecibirDano(){
    std::cout << "Recive Dano" << std::endl;
}

Enemigo::~Enemigo() {
    std::cout << "Enemigo Destruido" << std::endl;
}
