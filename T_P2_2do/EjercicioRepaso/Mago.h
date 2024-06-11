//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_MAGO_H
#define EJERCICIOREPASO_MAGO_H
#include "PersonajeVideojuego.h"

class Mago : public PersonajeVideojuego {

    public:
    Mago();
    Mago(const Mago &mago);
    Mago(int lvl, int vida, std::string nombre, std::string gender, int lvlMana, int lvlHechizeria);
    virtual ~Mago();

    void Ataque() override;

    int getlvlMana() const;
    void setlvlMana(int lvlHechizeria);

    int getlvlHechizeria() const;
    void setlvlHechizeria(int lvlHechizeria);

    private:
    int lvlMana;
    int lvlHechizeria;
};


#endif //EJERCICIOREPASO_MAGO_H
