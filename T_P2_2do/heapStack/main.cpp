#include <iostream>
#include <memory>
#include "Persona.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Persona Pedro(true, false);
    Persona *Miguel = new Persona(false, true);

    std::unique_ptr <Persona> Manolo = std::make_unique <Persona> (true,true);

    delete Miguel;

    return 0;
}
