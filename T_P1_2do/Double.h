//
// Created by Diego on 09/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_DOUBLE_H
#define PROYECTOS_IPV_AAST_DOUBLE_H

class VDouble {


public:

    VDouble();//Default constructor
    VDouble(const VDouble &vdouble);// Copy constructor
    explicit VDouble(double value);//Parameters constructor
    ~VDouble() = default;//Destructor

//Operadores de asignación =
    VDouble &operator= (const VDouble &rhs);
    VDouble &operator= (double i);
//Operadores de asignación +
    VDouble &operator+ (const VDouble &rhs);
    VDouble &operator+ (double i);
//Operadores de asignación -
    VDouble &operator- (const VDouble &rhs);
    VDouble &operator- (double i);
//Operadores de asignación *
    VDouble &operator* (VDouble &rhs);
    VDouble &operator* (double i);
//Operadores de asignación /
    VDouble &operator/ (VDouble &rhs);
    VDouble &operator/ (double i);
//Operadores de asignación %
    VDouble operator% (VDouble &rhs);
    VDouble operator% (double i);
//Operadores de comparacion ">,<,==,=>,=<,!="
    bool operator> (VDouble &rhs);
    bool operator> (double i);

    bool operator< (VDouble &rhs);
    bool operator< (double i);

    bool operator== (VDouble &rhs);
    bool operator== (double i);

    bool operator>= (VDouble &rhs);
    bool operator>= (double i);

    bool operator<= (VDouble &rhs);
    bool operator<= (double i);

    bool operator!= (VDouble &rhs);
    bool operator!= (double i);

private:

    double value;

};

#endif //LINKSAPPS_FLOAT_H