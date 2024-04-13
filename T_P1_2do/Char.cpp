//
// Created by Diego on 09/04/2024.
//

#include "Char.h"

//Constructor Implícito
VChar::VChar(){
    this-> value = 0;
}
//Constructor Explícito por Parámetros
VChar::VChar(char value){
    this-> value=value;
}
//Constructor Explícito por copia
VChar::VChar(const VChar &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
VChar &VChar::operator= (const VChar &rhs){
    if(value != rhs.value){
        this->value = rhs.value;
    }
    return *this;
}
VChar &VChar::operator= (int i){
    if(value != value){
        this->value = value;
    }
    return *this;
}

//Sobrecarga de Operadores de comparacion "=="
bool VChar::operator== (VChar &rhs){
    return value == rhs.value;
}
bool VChar::operator== (int i){
    return value == i;
}

//Sobrecarga de Operadores de comparacion "!="
bool VChar::operator!= (VChar &rhs){
    return value != rhs.value;
}
bool VChar::operator!= (int i){
    return value != i;
}