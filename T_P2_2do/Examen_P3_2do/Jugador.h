//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_JUGADOR_H
#define EXAMEN_P3_2DO_JUGADOR_H
#include "Personaje.h"
#include "Inventario.h"
#include "BolaDeFuego.h"
#include "Curar"
#include <iostream>

class Jugador : public Personaje, public Inventario, public BolaDeFuego, public Curar{
public:
    Jugador();
    Jugador(std::string nombre, int salud, int dano, int mana);
    virtual ~Jugador();

    void mostrarInfo() override;
};

#endif //EXAMEN_P3_2DO_JUGADOR_H
