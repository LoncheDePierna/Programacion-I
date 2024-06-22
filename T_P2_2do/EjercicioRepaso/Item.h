//
// Created by Diego on 18/06/2024.
//

#ifndef PROYECTOS_IPV_AAST_ITEM_H
#define PROYECTOS_IPV_AAST_ITEM_H

#include "iostream"

class Item {
public:
    Item();
    Item(const std::string& nombre);
    virtual ~Item();

    const std::string& getnombre() const;

    void setnombre(std::string nombre);

    virtual void usar();

private:
    std::string nombre;
};


#endif //PROYECTOS_IPV_AAST_ITEM_H
