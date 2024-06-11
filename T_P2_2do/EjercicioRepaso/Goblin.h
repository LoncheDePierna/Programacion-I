//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_GOBLIN_H
#define EJERCICIOREPASO_GOBLIN_H
#include "Enemigo.h"

class Goblin : public Enemigo{

    public:
        Goblin();
        Goblin(const Goblin &goblin);
        Goblin(int lvlAmenaza, int vida, std::string clase, std::string arma);
        virtual ~Goblin();


        void RecibirDano() override;

    private:
    std::string clase;
    std::string arma;
    };

#endif //EJERCICIOREPASO_GOBLIN_H
