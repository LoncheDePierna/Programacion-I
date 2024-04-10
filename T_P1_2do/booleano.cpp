//
// Created by Diego on 09/04/2024.
//

#include "booleano.h"


//Constructor Implícito
Booleano::Booleano(){
    this-> value = true;
}
//Constructor Explícito por copia
Booleano::Booleano(bool value){
    this-> value=value;
}
//Constructor Explícito por Parámetros
Booleano::Booleano(const Booleano &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
Booleano &Booleano::operator= (const Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator= (bool i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "+"
Booleano &Booleano::operator+ (const Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator+ (bool i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "-"
Booleano &Booleano::operator- (const Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator- (bool i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador *
Booleano &Booleano::operator* (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator* (bool i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador /
Booleano &Booleano::operator/ (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator/ (bool i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador %
Booleano &Booleano::operator% (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator% (bool i){
    this->value = i;
    return *this;
}
//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
Booleano &Booleano::operator> (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator> (bool i){
    this->value = i;
    return *this;
}
Booleano &Booleano::operator< (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator< (bool i){
    this->value = i;
    return *this;
}
Booleano &Booleano::operator== (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator== (bool i){
    this->value = i;
    return *this;
}
Booleano &Booleano::operator>= (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator>= (bool i){
    this->value = i;
    return *this;
}
Booleano &Booleano::operator<= (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator<= (bool i){
    this->value = i;
    return *this;
}
Booleano &Booleano::operator!= (Booleano &rhs){
    this->value = rhs.value;
    return *this;
}
Booleano &Booleano::operator!= (bool i){
    this->value = i;
    return *this;
}