//
// Created by Alumnos on 11/06/2024.
//

#include "Goblin.h"

Goblin::Goblin(){
    this -> clase = "";
    this -> arma = "";

}

Goblin::Goblin(int lvlAmenaza, int vida, std::string clase, std::string arma) : Enemigo(lvlAmenaza, vida){
    this -> clase = clase;
    this -> arma = arma;

}

void Goblin::RecibirDano(){
    std::cout << "Agh!" << std::endl;
}

Goblin::~Goblin() {
    std::cout << "Goblin Destruido" << std::endl;
}
