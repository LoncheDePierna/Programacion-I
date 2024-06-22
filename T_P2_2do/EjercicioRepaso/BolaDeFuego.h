//
// Created by Alumnos on 18/06/2024.
//

#ifndef EJERCICIOREPASO_BOLADEFUEGO_H
#define EJERCICIOREPASO_BOLADEFUEGO_H
#include "Habilidad.h"
#include <iostream>

class BolaDeFuego : public Habilidad{

    public:
        BolaDeFuego();
        BolaDeFuego(int danio);
        virtual ~BolaDeFuego();

        void usar() override;

    private:
    int danio;
};


#endif //EJERCICIOREPASO_BOLADEFUEGO_H
