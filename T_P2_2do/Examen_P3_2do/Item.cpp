//
// Created by Alumnos on 20/06/2024.
//

#include "Item.h"

    Item::Item(){
    this -> nombre = "n/a";
    this -> tipo = "n/a";
}

    Item::Item(std::string nombre, std::string tipo) {
    this->nombre = nombre;
}


std::string Item::getNombre() const{
    return nombre;
}
std::string Item::getTipo() const{
    return tipo;
}

void Item::usarItem(std::string nombre) {
    std::cout << "Item" <<nombre << "utilizado"<<std::endl;
    delete this;
}

    Item::~Item(){
    std::cout<< " Item destruido" << std::endl;
}