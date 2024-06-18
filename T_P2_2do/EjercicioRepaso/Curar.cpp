//
// Created by Alumnos on 18/06/2024.
//

#include "Curar.h"

    Curar::Curar() {
        this -> cura = 0;
}
    Curar::Curar(int cura) {
    this -> cura = cura;
}

void Curar::usar() {
    std::cout << "Has usado la habilidad Curar" << std::endl;
}


Curar::~Curar(){
    std::cout << "Curacion destruida";
}