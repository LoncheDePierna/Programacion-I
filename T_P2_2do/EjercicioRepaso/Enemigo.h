//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_ENEMIGO_H
#define EJERCICIOREPASO_ENEMIGO_H
#include "iostream"

class Enemigo {

    public:
    Enemigo();
    Enemigo(const Enemigo &enemigo);
    Enemigo(int dano, int vida);
    virtual ~Enemigo();

    int getdano() const;
    void setdano(int dano);

    int getvida() const;
    void setvida(int vida);

    virtual void RecibirDano(int dano);

    private:
    int dano;
    int vida;
};

#endif //EJERCICIOREPASO_ENEMIGO_H
