//
// Created by Diego on 02/05/2024.
//

#ifndef PROYECTOS_IPV_AAST_CANGURO_H
#define PROYECTOS_IPV_AAST_CANGURO_H

#include "Animal.h"

class Canguro : public Animal{

public:

    Canguro();//Default constructor
    Canguro(const Canguro &canguro);// Copy constructor
    Canguro(std::string name, int age, float height, float weight, bool canjump, bool canfight);//Parameters    constructor
    ~Canguro() = default;//Destructor

    virtual void makeSound() override;

private:

    bool canjump;
    bool canfight;

};


#endif //PROYECTOS_IPV_AAST_CANGURO_H
