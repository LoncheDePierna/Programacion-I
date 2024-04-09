#ifndef LINKSAPPS_AUTOMOVIL_H
#define LINKSAPPS_AUTOMOVIL_H

#include <iostream>
#include <string>

class Automovil {

public:

    Automovil() = default;//Default constructor
    Automovil(const Automovil &automobil);// Copy constructor
    Automovil(std::string marca, std::string duenio, std::string modelo, int anio, float kilometraje);//Parameters    constructor
    ~Automovil() = default;//Destructor

    Automovil &operator= (const Automovil &rhs);

    void Imprimir(){
      std::cout << "Marca: " << marca << std::endl;
      std::cout << "Duenio: " << duenio << std::endl;
      std::cout << "Modelo: " << modelo << std::endl;
      std::cout << "Anio: " << anio << std::endl;
      std::cout << "Km: " << kilometraje << std::endl;
    };

private:
    std::string marca;
    std::string duenio;
    std::string modelo;

    int anio;
    float kilometraje;

};


#endif //LINKSAPPS_AUTOMOVIL_H