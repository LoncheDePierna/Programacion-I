//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_PERSONAJEVIDEOJUEGO_H
#define EJERCICIOREPASO_PERSONAJEVIDEOJUEGO_H
#include "Curar.h"
#include "BolaDeFuego.h"
#include "iostream"
#include "vector"
#include "algorithm"

class PersonajeVideojuego {

    public:
    PersonajeVideojuego();
    PersonajeVideojuego(const PersonajeVideojuego &personajeVideojuego);
    PersonajeVideojuego(int lvl, int vida, std::string nombre, std::string gender);
    virtual ~PersonajeVideojuego();

    int getlvl() const;
    void setlvl(int lvl);

    int getvida() const;
    void setvida(int vida);

    std::string getnombre() const;
    void setnombre(std::string nombre);

    std::string getgender() const;
    void setgender(std::string gender);

    virtual void Ataque();
    void addHabilidades(Habilidad);

    private:
    int lvl;
    int  vida;
    std::string nombre;
    std::string gender;
    std::vector<Habilidad*> Habilidades;
};




#endif //EJERCICIOREPASO_PERSONAJEVIDEOJUEGO_H
