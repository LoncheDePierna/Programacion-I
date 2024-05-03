//
// Created by Diego on 02/05/2024.
//

#ifndef PROYECTOS_IPV_AAST_PINGUINO_H
#define PROYECTOS_IPV_AAST_PINGUINO_H

#include "Animal.h"

class Pinguino : public Animal{

public:

    Pinguino();//Default constructor
    Pinguino(const Pinguino &pinguino);// Copy constructor
    Pinguino(std::string name, int age, float height, float weight, bool canfly, bool canswim);//Parameters    constructor
    ~Pinguino() = default;//Destructor

    virtual void makeSound() override;

private:

    bool canfly;
    bool canswim;
};


#endif //PROYECTOS_IPV_AAST_PINGUINO_H
