//
// Created by Diego on 09/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_BOOLEANO_H
#define PROYECTOS_IPV_AAST_BOOLEANO_H


class Booleano {


public:

    Booleano();//Default constructor
    Booleano(const Booleano &booleano);// Copy constructor
    explicit Booleano(bool value);//Parameters constructor
    ~Booleano() = default;//Destructor

//Operadores de asignación =
    Booleano &operator= (const Booleano &rhs);
    Booleano &operator= (int i);
//Operadores de comparacion "==,!="
    bool operator== (Booleano &rhs);
    bool operator== (int i);

    bool operator!= (Booleano &rhs);
    bool operator!= (int i);

private:

    bool value;

};

#endif PROYECTOS_IPV_AAST_BOOLEANO_H