//
// Created by Alumnos on 18/06/2024.
//

#ifndef EJERCICIOREPASO_PERSONAJE_H
#define EJERCICIOREPASO_PERSONAJE_H

#include "Curar.h"
#include "BolaDeFuego.h"
#include "iostream"
#include "vector"
#include "algorithm"

class Personaje {
public:
    Personaje();
    Personaje(int salud, int mana);
    virtual ~Personaje();

    int getsalud() const;
    void setsalud(int salud);

    int getmana() const;
    void setmana(int mana);

    void addHabilidades(Habilidad);

private:
    int salud;
    int mana;
    std::vector<Habilidad*> Habilidades;
};


#endif //EJERCICIOREPASO_PERSONAJE_H
