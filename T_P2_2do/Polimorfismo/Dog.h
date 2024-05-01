//
// Created by Alumnos on 30/04/2024.
//

#ifndef PROGRAMACION_I_NINJA_H
#define PROGRAMACION_I_NINJA_H

#include "Animal.h"

class Dog : public Animal{

public:

    Dog();//Default constructor
    Dog(const Dog &dog);// Copy constructor
    Dog(std::string name, int age, float height, float weight, std::string raza, std::string color);//Parameters    constructor
    ~Dog() = default;//Destructor

    virtual void makeSound() override;

private:

    std::string raza;
    std::string color;

};

#endif //PROGRAMACION_I_DOG_H
