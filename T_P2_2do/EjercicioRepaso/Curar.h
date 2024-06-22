//
// Created by Alumnos on 18/06/2024.
//

#ifndef EJERCICIOREPASO_CURAR_H
#define EJERCICIOREPASO_CURAR_H
#include "Habilidad.h"
#include "iostream"

class Curar : public Habilidad{

    public:
        Curar();
        Curar(int cura);
        virtual ~Curar();

        void usar() override;

    private:
    int cura;
};


#endif //EJERCICIOREPASO_CURAR_H
