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
    Orco(int dano, int vida, std::string clase, std::string arma);
    virtual ~Orco();

    std::string getclase() const;
    void setclase(std::string clase);

    std::string getarma() const;
    void setarma(std::string arma);

    void RecibirDano(int dano) override;

    int getlvlMana() const;
    void setlvlMana(int lvlHechizeria);

private:
    std::string clase;
    std::string arma;
    int vida;
};


#endif //EJERCICIOREPASO_ORCO_H
