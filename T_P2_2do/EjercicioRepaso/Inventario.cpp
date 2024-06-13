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

void Inventario::addItemInv(std::string item){
    inv.push_back(item);
    std::cout << item << " Agregado al inventario" << std::endl;
}

void Inventario::delItemInv(std::string item){
    auto it = std::find(inv.begin(), inv.end(), item);
            if (it != inv.end()){
                inv.erase(it);
                std::cout << std::endl << item << " Eliminado" << std::endl;
            }
            else{
                std::cout << item << " No encontrado" << std::endl;
            }
}
void Inventario::mostrarInv() {

    std::cout<<"Tu inventario tiene: ";
        for(std::string& item : inv)
        {
            std::cout<<item<<" ";
        }
    }