//
// Created by Alumnos on 11/04/2024.
//

#include "Kage.h"

Kage::Kage() : Sannin(){
    this-> apodo = "N/A";
    this-> invocacion = "N/A";
    this-> aUnica = "N/A";
};

Kage::Kage(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica) : Sannin(gender, name, age, height, weight, aldea, tChakra, nvlChakra){
    this-> apodo = apodo;
    this-> invocacion = invocacion;
    this-> aUnica = aUnica;
}

Kage::Kage(const Sannin &rhs) : Ninja(rhs){
    apodo = rhs.apodo;
    invocacion = rhs.invocacion;
    aUnica = rhs.aUnica;
}

std::string Sannin::getApodo() const {
    return apodo;
}
void Sannin::setApodo(std::string apodo) {
    this-> apodo = apodo;
}

std::string Sannin::getinvocacion() const {
    return invocacion;
}
void Sannin::setinvocacion(std::string invocacion) {
    this-> invocacion = invocacion;
}

std::string Sannin::getaUnica() const {
    return aUnica;
}
void Sannin::setaUnica(std::string aUnica){
    this-> aUnica = aUnica;
}