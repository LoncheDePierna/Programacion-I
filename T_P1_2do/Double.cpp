//
// Created by Diego on 09/04/2024.
//

#include "Double.h"

//Constructor Implícito
VDouble::VDouble(){
    this-> value = 0;
}
//Constructor Explícito por copia
VDouble::VDouble(double value){
    this-> value=value;
}
//Constructor Explícito por Parámetros
VDouble::VDouble(const VDouble &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
VDouble &VDouble::operator= (const VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator= (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "+"
VDouble &VDouble::operator+ (const VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator+ (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "-"
VDouble &VDouble::operator- (const VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator- (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador *
VDouble &VDouble::operator* (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator* (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador /
VDouble &VDouble::operator/ (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator/ (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador %
VDouble &VDouble::operator% (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator% (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
VDouble &VDouble::operator> (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator> (bool i){
    this->value = i;
    return *this;
}
VDouble &VDouble::operator< (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator< (bool i){
    this->value = i;
    return *this;
}
VDouble &VDouble::operator== (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator== (bool i){
    this->value = i;
    return *this;
}
VDouble &VDouble::operator>= (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator>= (bool i){
    this->value = i;
    return *this;
}
VDouble &VDouble::operator<= (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator<= (bool i){
    this->value = i;
    return *this;
}
VDouble &VDouble::operator!= (VDouble &rhs){
    this->value = rhs.value;
    return *this;
}
VDouble &VDouble::operator!= (bool i){
    this->value = i;
    return *this;
}