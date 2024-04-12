//
// Created by Alumnos on 11/04/2024.
//

#include "Kage.h"

Kage::Kage() : Sannin(){
    this-> tkage = "N/A";
    this-> eunico = "N/A";
    this-> husadas = "N/A";
};

Kage::Kage(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica, std::string tkage, std::string eunico, std::string husadas) : Sannin(gender, name, age, height, weight, aldea, tChakra, nvlChakra, tkage, eunico, husadas){
    this-> tkage = tkage;
    this-> eunico = eunico;
    this-> husadas = husadas;
}

Kage::Kage(const Kage &rhs) : Sannin(rhs){
    tkage = rhs.tkage;
    eunico = rhs.eunico;
    husadas = rhs.husadas;
}

std::string Kage::gettkage() const {
    return tkage;
}
void Kage::settkage(std::string tkage) {
    this-> tkage = tkage;
}

std::string Kage::geteunico() const {
    return eunico;
}
void Kage::seteunico(std::string eunico) {
    this-> eunico = eunico;
}

std::string Kage::gethusadas() const {
    return husadas;
}
void Kage::sethusadas(std::string husadas){
    this-> husadas = husadas;
}