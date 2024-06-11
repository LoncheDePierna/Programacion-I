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
    Enemigo(int lvlAmenaza, int vida);
    virtual ~Enemigo();


    virtual void RecibirDano();

    private:
    int lvlAmenaza;
    int vida;
};

#endif //EJERCICIOREPASO_ENEMIGO_H
