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
    Booleano &operator= (bool i);
//Operadores de asignación +
    Booleano &operator+ (const Booleano &rhs);
    Booleano &operator+ (bool i);
//Operadores de asignación -
    Booleano &operator- (const Booleano &rhs);
    Booleano &operator- (bool i);
//Operadores de asignación *
    Booleano &operator* (Booleano &rhs);
    Booleano &operator* (bool i);
//Operadores de asignación /
    Booleano &operator/ (Booleano &rhs);
    Booleano &operator/ (bool i);
//Operadores de asignación %
    Booleano &operator% (Booleano &rhs);
    Booleano &operator% (bool i);
//Operadores de comparacion ">,<,==,=>,=<,!="
    Booleano &operator> (Booleano &rhs);
    Booleano &operator> (bool i);

    Booleano &operator< (Booleano &rhs);
    Booleano &operator< (bool i);

    Booleano &operator== (Booleano &rhs);
    Booleano &operator== (bool i);

    Booleano &operator>= (Booleano &rhs);
    Booleano &operator>= (bool i);

    Booleano &operator<= (Booleano &rhs);
    Booleano &operator<= (bool i);

    Booleano &operator!= (Booleano &rhs);
    Booleano &operator!= (bool i);

private:

    bool value;

};

#endif PROYECTOS_IPV_AAST_BOOLEANO_H