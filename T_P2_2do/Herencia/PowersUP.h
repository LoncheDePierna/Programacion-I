//
// Created by Alumnos on 16/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_POWERSUP_H
#define PROYECTOS_IPV_AAST_POWERSUP_H


class PowersUP {

public:

    PowersUP();//Default constructor
    PowersUP(const PowersUP &powersUP);// Copy constructor
    PowersUP(bool regeneracion, bool ojoMagico, bool superFuerza);//Parameters    constructor
    ~PowersUP() = default;//Destructor

    bool getregeneracion() const;
    void setregeneracion(bool regeneracion);

    bool getojoMagico() const;
    void setojoMagico(bool ojoMagico);

    bool getsuperFuerza() const;
    void setsuperFuerza(bool superFuerza);

private:

    bool regeneracion;
    bool ojoMagico;
    bool superFuerza;
};

#endif //PROYECTOS_IPV_AAST_POWERSUP_H
