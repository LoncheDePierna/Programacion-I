//
// Created by Diego on 18/06/2024.
//

#include "Item.h"

Item::Item() {
    this -> nombre = "n/a";

}

Item::Item(const std::string& nombre) : nombre(nombre){
    this -> nombre = nombre;

}

const std::string& Item::getnombre() const {
    return nombre;
}
void Item::setnombre(std::string nombre) {
    this-> nombre = nombre;
}

void Item::usar(){
    std::cout << "Has usado el item " << nombre << std::endl;
}

Item::~Item(){
}