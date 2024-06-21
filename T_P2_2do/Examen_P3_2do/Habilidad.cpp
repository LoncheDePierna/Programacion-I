//
// Created by Alumnos on 20/06/2024.
//

#include "Habilidad.h"

Habilidad::Habilidad() {
    this -> nombre = "n/h";
    this -> costo = 0;
}
Habilidad::Habilidad(std::string nombre, int costo) {
    this -> nombre = nombre;
    this -> costo = costo;
}

std::string Habilidad::getNombreH() const {
    return nombre;
}

    void Habilidad::usarHabilidad(std::string nombre){
    std::cout << "Has usado la habilidad: " << nombre << std::endl;
    }

    void Habilidad::agregarHabilidad(std::string nombre){
    std::cout << "Has agregado la habilidad: " << nombre << std::endl;
}

Habilidad::~Habilidad() {
    std::cout << "Habilidad destruida" << std::endl;
}
