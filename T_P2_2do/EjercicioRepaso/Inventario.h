//
// Created by Alumnos on 13/06/2024.
//

#ifndef EJERCICIOREPASO_INVENTARIO_H
#define EJERCICIOREPASO_INVENTARIO_H
#include "iostream"
#include "vector"
#include "algorithm"

class Inventario {

    public:
    Inventario();
    virtual ~Inventario();



    void addItemInv(std::string item);
    void delItemInv(std::string item);
    void mostrarInv();

    private:
    std::vector<std::string> inv;
};


#endif //EJERCICIOREPASO_INVENTARIO_H
