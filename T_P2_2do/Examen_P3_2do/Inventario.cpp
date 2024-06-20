//
// Created by Alumnos on 20/06/2024.
//

#include "Inventario.h"
#include <iostream>
#include <algorithm>

Inventario::Inventario() {}

Inventario::Inventario(std::vector<Item*> inv) {
    this->inv = inv;
}

void Inventario::agregarItem(Item* newItem) {
    inv.push_back(newItem);
    std::cout<<"Item" << newItem->getNombre() << "agregado."<<std::endl;
}

void Inventario::mostrarItem() {
    std::cout << "~ Inventario ~ " << std::endl;
    for (Item* item : inv){
        std::cout << "Item: " << item->getNombre() << " Tipo: " << item->getTipo() << std::endl;
    }
}

void Inventario::eliminarItem(std::string nombre) {

    auto it = std::find_if(inv.begin(), inv.end(),[&nombre](Item* item) { return item->getNombre() == nombre;});

    if(it != inv.end()){
        std::cout << "Item " << (*it)->getNombre() << " eliminado" << std::endl;
        inv.erase(it);
    }else {
        std::cout << "Item no encontrado" << std::endl;
    }
}

Inventario::~Inventario(){
    std::cout<<"Inventario destruido"<<std::endl;
}