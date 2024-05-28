//
// Created by Alumnos on 28/05/2024.
//

#ifndef HEAPSTACK_PERSONA_H
#define HEAPSTACK_PERSONA_H


class Persona {

    public:

    Persona(bool death, bool *men);
    Persona(const Persona &rhs) : death(rhs.death), men(new bool(*rhs.men)){}
    virtual ~Persona();



    private:

    bool death;
    men = new bool;
    *men = *rhs.men;

};


#endif //HEAPSTACK_PERSONA_H
