//
// Created by Alumnos on 20/06/2024.
//

#ifndef EXAMEN_P3_2DO_ITEM_H
#define EXAMEN_P3_2DO_ITEM_H
#include <iostream>

class Item {
public:
    Item();
    Item(std::string nombre, std::string tipo);
    virtual ~Item();

    std::string getNombre() const;
    std::string getTipo() const;
    virtual void usarItem(std::string nombre);

private:
    std::string nombre;
    std::string tipo;
};


#endif //EXAMEN_P3_2DO_ITEM_H
