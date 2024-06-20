//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_ENEMIGO_H
#define EXAMEN_P3_2DO_ENEMIGO_H
#include "Entidad.h"
#include <iostream>

class Enemigo : public Entidad{
public:
    Enemigo();
    Enemigo(std::string nombre, int salud, int dano, int armadura);
    virtual ~Enemigo();

    int getDano() const;
    int getArmadura() const;
    void mostrarInfo() override;

private:
    int dano;
    int armadura;
};

#endif //EXAMEN_P3_2DO_ENEMIGO_H