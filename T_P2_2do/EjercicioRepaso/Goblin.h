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
        Goblin(int dano, int vida, std::string clase, std::string arma);
        virtual ~Goblin();

    std::string getclase() const;
    void setclase(std::string clase);

    std::string getarma() const;
    void setarma(std::string arma);

        void RecibirDano(int dano) override;

    private:
    std::string clase;
    std::string arma;
    int vida;
    };

#endif //EJERCICIOREPASO_GOBLIN_H
