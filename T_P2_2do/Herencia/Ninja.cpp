//
// Created by Alumnos on 09/04/2024.
//

#include "Ninja.h"

Ninja::Ninja() : Persona(){
    this-> aldea = "N/A";
    this-> tChakra = "N/A";
    this-> nvlChakra = 0;
};

Ninja::Ninja(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra) : Persona(gender, name, age, height, weight){
    this-> aldea = aldea;
    this-> tChakra = tChakra;
    this-> nvlChakra = nvlChakra;
}

Ninja::Ninja(const Ninja &rhs):Persona(rhs){
    aldea = rhs.aldea;
    tChakra = rhs.tChakra;
    nvlChakra = rhs.nvlChakra;
}

std::string Ninja::getAldea() const {
    return aldea;
}
void Ninja::setAldea(std::string aldea) {
    this-> aldea = aldea;
}

std::string Ninja::getTChakra() const {
    return tChakra;
}
void Ninja::setTChakra(std::string tChakra) {
    this->tChakra = tChakra;
}

int Ninja::getNvlChakra() const {
    return nvlChakra;
}
void Ninja::setNvlChakra(int nvlChakra){
    this->nvlChakra = nvlChakra;
}