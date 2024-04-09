//
// Created by Alumnos on 09/04/2024.
//

#ifndef PROGRAMACION_I_NINJA_H
#define PROGRAMACION_I_NINJA_H

#include "Persona.h"
#include <string>

class Ninja : public Persona{

    public:

    Ninja();//Default constructor
    Ninja(const Ninja &ninja);// Copy constructor
    Ninja(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra);//Parameters    constructor
    ~Ninja() = default;//Destructor

    std::string getAldea() const;
    void setAldea(std::string aldea);

    std::string getTChakra() const;
    void setTChakra(std::string tChakra);

    int getNvlChakra() const;
    void setNvlChakra(int nvlChakra);

    private:

    std::string aldea;
    std::string tChakra;
    int nvlChakra;
};


#endif //PROGRAMACION_I_NINJA_H
