//
// Created by Alumnos on 11/06/2024.
//

#include "Orco.h"

Orco::Orco(){
    this -> clase = "";
    this -> arma = "";
}

Orco::Orco(int dano, int vida, std::string clase, std::string arma) : Enemigo (dano, vida){
    this -> clase = clase;
    this -> arma = arma;

}

std::string Orco::getclase() const {
    return clase;
}
void Orco::setclase(std::string clase) {
    this-> clase = clase;
}
std::string Orco::getarma() const {
    return arma;
}
void Orco::setarma(std::string arma) {
    this-> arma = arma;
}

void Orco::RecibirDano(int dano){
    this ->setvida(this -> getvida() - dano);
    std::cout << " Owhg! v: " << getvida() << std::endl;

}

Orco::~Orco() {
    std::cout << "Goblin Destruido" << std::endl;
}