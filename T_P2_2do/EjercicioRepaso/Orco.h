//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_ORCO_H
#define EJERCICIOREPASO_ORCO_H
#include "Enemigo.h"

class Orco : public Enemigo{

public:
    Orco();
    Orco(const Orco &orco);
    Orco(int lvlAmenaza, int vida, std::string clase, std::string arma);
    virtual ~Orco();


    void RecibirDano() override;

private:
    std::string clase;
    std::string arma;
};


#endif //EJERCICIOREPASO_ORCO_H
