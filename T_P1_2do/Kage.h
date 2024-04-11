//
// Created by Alumnos on 11/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_KAGE_H
#define PROYECTOS_IPV_AAST_KAGE_H

#include "Persona.h"
#include "Ninja.h"
#include "Sannin.h"

class Kage : Sannin {

public:

    Kage();//Default constructor
    Kage(const Kage &kage);// Copy constructor
    Kage(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica, std::string tkage, std::string eunico, std::string husadas);//Parameters    constructor
    ~Kage() = default;//Destructor

    std::string gettkage() const;
    void settkage(std::string tkage);

    std::string geteunico() const;
    void seteunico(std::string eunico);

    std::string gethusadas() const;
    void sethusadas(std::string husadas);

private:

    std::string tkage;
    std::string eunico;
    std::string husadas;

};

#endif //PROYECTOS_IPV_AAST_KAGE_H
