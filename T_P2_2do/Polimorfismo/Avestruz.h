//
// Created by Diego on 30/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_AVESTRUZ_H
#define PROYECTOS_IPV_AAST_AVESTRUZ_H

#include "Animal.h"

class Avestruz : public Animal{

public:

    Avestruz();//Default constructor
    Avestruz(const Avestruz &avestruz);// Copy constructor
    Avestruz(std::string name, int age, float height, float weight, std::string colorOjos, std::string numeroPatas);//Parameters    constructor
    ~Avestruz() = default;//Destructor

    virtual void makeSound() override;

private:

    std::string colorOjos;
    std::string numeroPatas;

};

#endif //PROYECTOS_IPV_AAST_AVESTRUZ_H
