//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_ENTIDAD_H
#define EXAMEN_P3_2DO_ENTIDAD_H
#include <iostream>

class Entidad {
public:
    Entidad();
    Entidad(std::string nombre, int salud);
    virtual ~Entidad();

    std::string getNombre() const;
    int getSalud() const;
    virtual void mostrarInfo();

private:
    std::string nombre;
    int salud;
};

#endif //EXAMEN_P3_2DO_ENTIDAD_H
