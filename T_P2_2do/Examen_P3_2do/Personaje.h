//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_PERSONAJE_H
#define EXAMEN_P3_2DO_PERSONAJE_H
#include "Entidad.h"
#include <iostream>

class Personaje : public Entidad{
public:
    Personaje();
    Personaje(std::string nombre, int salud, int dano, int mana);
    virtual ~Personaje();

    int getDano() const;
    int getMana() const;
    void mostrarInfo() override;

private:
    int dano;
    int mana;
};

#endif //EXAMEN_P3_2DO_PERSONAJE_H
