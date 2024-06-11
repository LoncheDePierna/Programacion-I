//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_GUERRERO_H
#define EJERCICIOREPASO_GUERRERO_H
#include "PersonajeVideojuego.h"

class Guerrero : public PersonajeVideojuego{

public:
    Guerrero();
    Guerrero(const Guerrero &Guerrero);
    Guerrero(int lvl, int vida, std::string nombre, std::string gender, int lvlFuerza, int lvlDestreza);
    virtual ~Guerrero();

    void Ataque() override;

    int getlvlFuerza() const;
    void setlvlFuerza(int lvlFuerza);

    int getlvlDestreza() const;
    void setlvlDestreza(int lvlDestreza);

private:
    int lvlFuerza;
    int lvlDestreza;
};


#endif //EJERCICIOREPASO_GUERRERO_H
