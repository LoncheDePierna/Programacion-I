//
// Created by Alumnos on 20/06/2024.
//

#include "Entidad.h"

Entidad::Entidad() {
    this -> nombre = "n/a";
    this -> salud = 0;
}

Entidad::Entidad(std::string nombre, int salud) {
    this -> nombre = nombre;
    this -> salud = salud;
}
    std::string Entidad::getNombre() const {
        return nombre;
}
    int Entidad::getSalud() const {
        return salud;
}

    void Entidad::mostrarInfo() {
        std::cout << "Nombre: " << getNombre() << " Salud: " << getSalud() << std::endl;
}



Entidad::~Entidad() {
    std::cout << "Entidad Destruida" << std::endl;
}