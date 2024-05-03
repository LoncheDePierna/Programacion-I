//
// Created by Diego on 02/05/2024.
//

#ifndef PROYECTOS_IPV_AAST_GALLINA_H
#define PROYECTOS_IPV_AAST_GALLINA_H

#include "Animal.h"

class Gallina : public Animal{

public:

    Gallina();//Default constructor
    Gallina(const Gallina &gallina);// Copy constructor
    Gallina(std::string name, int age, float height, float weight, bool canrun, bool candig);//Parameters    constructor
    ~Gallina() = default;//Destructor

    virtual void makeSound() override;

private:

    bool canrun;
    bool candig;

};


#endif //PROYECTOS_IPV_AAST_GALLINA_H
