//
// Created by Alumnos on 30/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_CAPYBARA_H
#define PROYECTOS_IPV_AAST_CAPYBARA_H

#include "Animal.h"

class Capybara : public Animal{

public:

    Capybara();//Default constructor
    Capybara(const Capybara &capybara);// Copy constructor
    Capybara(std::string name, int age, float height, float weight, std::string comportamiento, std::string dieta);//Parameters    constructor
    ~Capybara() = default;//Destructor

    virtual void makeSound() override;

private:

    std::string comportamiento;
    std::string dieta;

};



#endif //PROYECTOS_IPV_AAST_CAPYBARA_H
