//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_BOLADEFUEGO_H
#define EXAMEN_P3_2DO_BOLADEFUEGO_H
#include "Habilidad.h"
#include <iostream>

class BolaDeFuego : public Habilidad{
public:
    BolaDeFuego();
    BolaDeFuego(std::string nombre, int costo, int dano);
    virtual ~BolaDeFuego();

    void usarHabilidad(std::string nombre) override;
    void agregarHabilidad(std::string nombre) override;
    void mostrarHabilidad();

private:
    int dano;
};


#endif //EXAMEN_P3_2DO_BOLADEFUEGO_H
