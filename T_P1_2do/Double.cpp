//
// Created by Diego on 09/04/2024.
//

#include "Double.h"

//Constructor Implícito
VDouble::VDouble(){
    this-> value = 0;
}
//Constructor Explícito por Parámetros
VDouble::VDouble(double value){
    this-> value=value;
}
//Constructor Explícito por copia
VDouble::VDouble(const VDouble &rhs){
    value= rhs.value;
}


//Sobrecarga de operador "="
VDouble &VDouble::operator= (const VDouble &rhs){
    if(value != rhs.value){
        this->value = rhs.value;
    }
    return *this;
}
VDouble &VDouble::operator= (double i){
    if(value != value){
        this->value = value;
    }
    return *this;
}

//Sobrecarga de operador "+"
VDouble &VDouble::operator+ (const VDouble &rhs){
    this->value = rhs.value + value;
    return *this;
}
VDouble &VDouble::operator+ (double i){
    this->value = i + value;
    return *this;
}

//Sobrecarga de operador "-"
VDouble &VDouble::operator- (const VDouble &rhs){
    this->value = rhs.value - value;
    return *this;
}
VDouble &VDouble::operator- (double i){
    this->value = i - value;
    return *this;
}

//Sobrecarga de operador *
VDouble &VDouble::operator* (VDouble &rhs){
    this->value = rhs.value * value;
    return *this;
}
VDouble &VDouble::operator* (double i){
    this->value = i * value;
    return *this;
}

//Sobrecarga de operador /
VDouble &VDouble::operator/ (VDouble &rhs){
    this->value = rhs.value / value;
    return *this;
}
VDouble &VDouble::operator/ (double i){
    this->value = i / value;
    return *this;
}

//Sobrecarga de operador %
VDouble VDouble::operator% (VDouble &rhs){
    int division = value / rhs.value;
    int multi = division * rhs.value;
    int residuo = value - multi;
    return VDouble(residuo);
}
VDouble VDouble::operator% (double i){
    int division = value / i;
    int multi = division * i;
    int residuo = value - multi;
    return VDouble(residuo);
}

//Sobrecarga de Operadores de comparacion ">"
bool VDouble::operator> (VDouble &rhs){
    return value > rhs.value;
}
bool VDouble::operator> (double i){
    return value > i;
}

//Sobrecarga de Operadores de comparacion "<"
bool VDouble::operator< (VDouble &rhs){
    return value < rhs.value;
}
bool VDouble::operator< (double i){
    return value < i;
}

//Sobrecarga de Operadores de comparacion "=="
bool VDouble::operator== (VDouble &rhs){
    return value == rhs.value;
}
bool VDouble::operator== (double i){
    return value == i;
}

//Sobrecarga de Operadores de comparacion "=>"
bool VDouble::operator>= (VDouble &rhs){
    return value >= rhs.value;
}
bool VDouble::operator>= (double i){
    return value >= i;
}

//Sobrecarga de Operadores de comparacion "=<"
bool VDouble::operator<= (VDouble &rhs){
    return value <= rhs.value;
}
bool VDouble::operator<= (double i){
    return value <= i;
}

//Sobrecarga de Operadores de comparacion "!="
bool VDouble::operator!= (VDouble &rhs){
    return value != rhs.value;
}
bool VDouble::operator!= (double i){
    return value != i;
}