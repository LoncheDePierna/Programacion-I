//
// Created by Alumnos on 18/06/2024.
//

#ifndef EJERCICIOREPASO_PERSONAJE_H
#define EJERCICIOREPASO_PERSONAJE_H


class Personaje {
public:
    Personaje();
    Personaje(int salud, int mana);
    virtual ~Personaje();

    int getlvl() const;
    void setlvl(int lvl);

    int getvida() const;
    void setvida(int vida);

private:
    int salud;
    int mana;
    std::vector<Habilidad*> Habilidades;
};


#endif //EJERCICIOREPASO_PERSONAJE_H
