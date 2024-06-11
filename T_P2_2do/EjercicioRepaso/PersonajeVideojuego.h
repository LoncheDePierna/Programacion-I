//
// Created by Alumnos on 11/06/2024.
//

#ifndef EJERCICIOREPASO_PERSONAJEVIDEOJUEGO_H
#define EJERCICIOREPASO_PERSONAJEVIDEOJUEGO_H

#include "iostream"

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

    private:
    int lvl;
    int  vida;
    std::string nombre;
    std::string gender;

};




#endif //EJERCICIOREPASO_PERSONAJEVIDEOJUEGO_H
