//
// Created by Alumnos on 16/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_PROTAGONISTA_H
#define PROYECTOS_IPV_AAST_PROTAGONISTA_H

#include "Persona.h"
#include "PoderesMagicos.h"
#include "PowersUP.h"

class Protagonista : public Persona, public PoderesMagicos, public PowersUP{

public:

    Protagonista();//Default constructor
    Protagonista(const Protagonista &rimuruTempest);// Copy constructor
    Protagonista(std::string gender, std::string name, int age, float height, float weight, bool bolaFuego, bool lanzaRayo, bool disparoAgua, bool regeneracion, bool ojoMagico, bool superFuerza) :Persona(gender,name,age,height,weight);//Parameters    constructor
    ~Protagonista() = default;//Destructor

};

#endif //PROYECTOS_IPV_AAST_PROTAGONISTA_H
