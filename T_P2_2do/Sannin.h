//
// Created by Alumnos on 11/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_SANNIN_H
#define PROYECTOS_IPV_AAST_SANNIN_H

#include "Persona.h"
#include "Ninja.h"

class Sannin : public Ninja {

public:

    Sannin();//Default constructor
    Sannin(const Sannin &sannin);// Copy constructor
    Sannin(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica);//Parameters    constructor
    ~Sannin() = default;//Destructor

    std::string getApodo() const;
    void setApodo(std::string apodo);

    std::string getinvocacion() const;
    void setinvocacion(std::string invocacion);

    std::string getaUnica() const;
    void setaUnica(std::string aUnica);

private:

    std::string apodo;
    std::string invocacion;
    std::string aUnica;

};

#endif //PROYECTOS_IPV_AAST_SANNIN_H
