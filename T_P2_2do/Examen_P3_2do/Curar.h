//
// Created by Alumnos on 21/06/2024.
//

#ifndef EXAMEN_P3_2DO_CURAR_H
#define EXAMEN_P3_2DO_CURAR_H
#include "Habilidad.h"
#include <iostream>

class Curar : public Habilidad{
public:
    Curar();
    Curar(std::string nombre, int costo, int vida);
    virtual ~Curar();

    void usarhabilidad(std::string nombre);
    void agregarhabilidad(std::string nombre);
    void mostrarhabilidad();

private:
    int vida;
};
#endif //EXAMEN_P3_2DO_CURAR_H