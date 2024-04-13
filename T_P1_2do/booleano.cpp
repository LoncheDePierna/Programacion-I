//
// Created by Diego on 09/04/2024.
//

#include "booleano.h"


//Constructor Implícito
Booleano::Booleano(){
    this-> value = true;
}
//Constructor Explícito por Parámetros
Booleano::Booleano(bool value){
    this-> value=value;
}
//Constructor Explícito por copia
Booleano::Booleano(const Booleano &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
Booleano &Booleano::operator= (const Booleano &rhs){
    if(value != rhs.value){
        this->value = rhs.value;
    }
    return *this;
}
Booleano &Booleano::operator= (int i){
    if(value != value){
        this->value = value;
    }
    return *this;
}

//Sobrecarga de Operadores de comparacion "=="
bool Booleano::operator== (Booleano &rhs){
    return value == rhs.value;
}
bool Booleano::operator== (int i){
    return value == i;
}

//Sobrecarga de Operadores de comparacion "!="
bool Booleano::operator!= (Booleano &rhs){
    return value != rhs.value;
}
bool Booleano::operator!= (int i){
    return value != i;
}