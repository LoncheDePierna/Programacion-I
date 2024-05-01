//
// Created by Alumnos on 16/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_PODERESMAGICOS_H
#define PROYECTOS_IPV_AAST_PODERESMAGICOS_H

class PoderesMagicos {

public:

    PoderesMagicos();//Default constructor
    PoderesMagicos(const PoderesMagicos &poderesMagicos);// Copy constructor
    PoderesMagicos(bool bolaFuego, bool lanzaRayo, bool disparoAgua);//Parameters    constructor
    ~PoderesMagicos() = default;//Destructor

    bool getbolaFuego() const;
    void setbolaFuego(bool bolaFuego);

    bool getlanzaRayo() const;
    void setlanzaRayo(bool lanzaRayo);

    bool getdisparoAgua() const;
    void setdisparoAgua(bool disparoAgua);

private:

    bool bolaFuego;
    bool lanzaRayo;
    bool disparoAgua;
};

#endif //PROYECTOS_IPV_AAST_PODERESMAGICOS_H
