//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_HABILIDAD_H
#define EXAMEN_P3_2DO_HABILIDAD_H
#include <iostream>

class Habilidad {
public:
    Habilidad();
    Habilidad(std::string nombre, int costo);
    virtual ~Habilidad();

    void usarHabiLidad(std::string nombre);
    void agregarHabiLidad(std::string nombre);
    std::string getNombreH() const;

private:
    int costo;
    std::string nombre;
};


#endif //EXAMEN_P3_2DO_HABILIDAD_H
