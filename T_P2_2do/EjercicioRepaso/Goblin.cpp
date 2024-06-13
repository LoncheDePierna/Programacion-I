//
// Created by Alumnos on 11/06/2024.
//

#include "Goblin.h"

Goblin::Goblin(){
    this -> clase = "";
    this -> arma = "";
}

Goblin::Goblin(int dano, int vida, std::string clase, std::string arma) : Enemigo(dano, vida){
    this -> clase = clase;
    this -> arma = arma;

}

std::string Goblin::getclase() const {
    return clase;
}
void Goblin::setclase(std::string clase) {
    this-> clase = clase;
}
std::string Goblin::getarma() const {
    return arma;
}
void Goblin::setarma(std::string arma) {
    this-> arma = arma;
}

void Goblin::RecibirDano(int dano){
    this ->setvida(this -> getvida() - dano);
    std::cout << " Agh! v: " << getvida() << std::endl;
}

Goblin::~Goblin() {
    std::cout << "Goblin Destruido" << std::endl;
}
