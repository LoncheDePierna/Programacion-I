#include "Automovil.h"

//Contructor por copia
Automovil::Automovil(const Automovil &rhs){
    marca = rhs.marca;
    duenio = rhs.duenio;
    modelo = rhs.modelo;
    anio = rhs.anio;
    kilometraje = rhs.kilometraje;
}
//Contructor por referencia
Automovil::Automovil(Automovil &&rhs){
    marca = rhs.marca;
    duenio = rhs.duenio;
    modelo = rhs.modelo;
    anio = rhs.anio;
    kilometraje = rhs.kilometraje;
}
//Constructor por parametros
Automovil::Automovil(std::string marca, std::string duenio, std::string modelo, int anio, float kilometraje){
    this-> marca=marca;
    this-> duenio=duenio;
    this-> modelo=modelo;
    this-> anio=anio;
    this-> kilometraje=kilometraje;
}
//Sobrcarga de operadores
Automovil &Automovil::operator= (const Automovil &rhs){
    this->marca = rhs.marca;
    this->duenio = rhs.duenio;
    this->modelo = rhs.modelo;
    this->anio = rhs.anio;
    this->kilometraje = rhs.kilometraje;

    return *this;
}