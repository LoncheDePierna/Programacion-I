//
// Created by Alumnos on 21/06/2024.
//

#include "Curar.h"

Curar::Curar() : Habilidad(){
    this -> vida = 0;
}

Curar::Curar(std::string nombre, int costo, int vida) : Habilidad(nombre, costo){
    this -> vida = vida;
}

void Curar::usarhabilidad(std::string nombre){
    std::cout << "Has usado la Habilidad: " << nombre << std::endl;
}

void Curar::agregarhabilidad(std::string nombre){
    std::cout << "Has agregado la habilidad: " << nombre << std::endl;
}
void Curar::mostrarhabilidad(){
    std::cout << "Habilidades: Bola de Fuego" << std::endl;
}

Curar::~Curar(){
    std::cout << "Bola de Fuego destruida" << std::endl;
}