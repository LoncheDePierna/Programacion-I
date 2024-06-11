//
// Created by Alumnos on 11/06/2024.
//

#include "Orco.h"

Orco::Orco(){
    this -> clase = "";
    this -> arma = "";

}

Orco::Orco(int lvlAmenaza, int vida, std::string clase, std::string arma) : Enemigo (lvlAmenaza, vida){
    this -> clase = clase;
    this -> arma = arma;

}

void Orco::RecibirDano(){
    std::cout << "Agh!" << std::endl;
}

Orco::~Orco() {
    std::cout << "Goblin Destruido" << std::endl;
}