//
// Created by Diego on 09/04/2024.
//

#include "Char.h"

//Constructor Implícito
VChar::VChar(){
    this-> value = 0;
}
//Constructor Explícito por copia
VChar::VChar(char value){
    this-> value=value;
}
//Constructor Explícito por Parámetros
VChar::VChar(const VChar &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
VChar &VChar::operator= (const VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator= (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "+"
VChar &VChar::operator+ (const VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator+ (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "-"
VChar &VChar::operator- (const VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator- (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador *
VChar &VChar::operator* (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator* (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador /
VChar &VChar::operator/ (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator/ (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador %
VChar &VChar::operator% (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator% (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
VChar &VChar::operator> (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator> (bool i){
    this->value = i;
    return *this;
}
VChar &VChar::operator< (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator< (bool i){
    this->value = i;
    return *this;
}
VChar &VChar::operator== (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator== (bool i){
    this->value = i;
    return *this;
}
VChar &VChar::operator>= (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator>= (bool i){
    this->value = i;
    return *this;
}
VChar &VChar::operator<= (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator<= (bool i){
    this->value = i;
    return *this;
}
VChar &VChar::operator!= (VChar &rhs){
    this->value = rhs.value;
    return *this;
}
VChar &VChar::operator!= (bool i){
    this->value = i;
    return *this;
}