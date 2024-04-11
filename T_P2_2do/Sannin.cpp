//
// Created by Alumnos on 11/04/2024.
//

//
// Created by Alumnos on 09/04/2024.
//

#include "Sannin.h"

Sannin::Sannin() : Ninja(){
    this-> apodo = "N/A";
    this-> invocacion = "N/A";
    this-> aUnica = "N/A";
};

Sannin::Sannin(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica) : Ninja(gender, name, age, height, weight, aldea, tChakra, nvlChakra){
    this-> apodo = apodo;
    this-> invocacion = invocacion;
    this-> aUnica = aUnica;
}

Sannin::Sannin(const Sannin &rhs) : Ninja(rhs){
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