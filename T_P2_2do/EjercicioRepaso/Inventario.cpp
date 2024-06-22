//
// Created by Alumnos on 13/06/2024.
//

#include "Inventario.h"
#include <iostream>
#include <algorithm>

Inventario::Inventario(){
}

Inventario::~Inventario() {
    std::cout << "Inventario Destruido" << std::endl;
}

void Inventario::addItemInv(const Item& item){
    inv.push_back(item);
    std::cout << item.getnombre() << " Agregado al inventario" << std::endl;
}

void Inventario::delItemInv(const std::string& nombre){
    auto it = std::find_if(inv.begin(), inv.end(), [&nombre](const Item& item) {
        return item.getnombre() == nombre;
    });

    if (it != inv.end()){
        inv.erase(it);
        std::cout << std::endl << nombre << " Eliminado" << std::endl;
    }
    else{
        std::cout << nombre << " No encontrado" << std::endl;
    }
}
void Inventario::mostrarInv() {

    std::cout<<"Tu inventario tiene: ";
        for(const Item& item : inv)
        {
            std::cout<<item.getnombre()<<" ";
        }
    }