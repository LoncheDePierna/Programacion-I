//
// Created by Diego on 02/05/2024.
//

#ifndef PROYECTOS_IPV_AAST_PAJARO_H
#define PROYECTOS_IPV_AAST_PAJARO_H

#include "Animal.h"

class Pajaro : public Animal{

public:

    Pajaro();//Default constructor
    Pajaro(const Pajaro &pajaro);// Copy constructor
    Pajaro(std::string name, int age, float height, float weight, bool puteggs, bool canhear);//Parameters    constructor
    ~Pajaro() = default;//Destructor

    virtual void makeSound() override;

private:

    bool puteggs;
    bool canhear;

};


#endif //PROYECTOS_IPV_AAST_PAJARO_H
