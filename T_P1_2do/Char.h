//
// Created by Diego on 09/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_CHAR_H
#define PROYECTOS_IPV_AAST_CHAR_H


class VChar {

public:

    VChar();//Default constructor
    VChar(const VChar &vChar);// Copy constructor
    explicit VChar(char value);//Parameters constructor
    ~VChar() = default;//Destructor

//Operadores de asignación =
    VChar &operator= (const VChar &rhs);
    VChar &operator= (int i);
//Operadores de comparacion "==,!="
    bool operator== (VChar &rhs);
    bool operator== (int i);

    bool operator!= (VChar &rhs);
    bool operator!= (int i);

private:

    char value;

};

#endif //LINKSAPPS_FLOAT_H