//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_INVENTARIO_H
#define EXAMEN_P3_2DO_INVENTARIO_H
#include "Item.h"
#include <vector>

#include <iostream>
class Inventario {
public:
    Inventario();
    Inventario(std::vector<Item*> inv);
    ~Inventario();

    void agregarItem(Item* newItem);

    void eliminarItem(std::string nombre);

    void mostrarItem();

private:
    std::vector<Item*> inv;
};

#endif //EXAMEN_P3_2DO_INVENTARIO_H