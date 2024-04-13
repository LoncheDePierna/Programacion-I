#include "Int.h"

//Constructor Implícito
IntCell::IntCell(){
    this-> value =0;
}

//Constructor Explícito por Parámetros
IntCell::IntCell(int value){
    this-> value=value;
}
//Constructor Explícito por copia
IntCell::IntCell(const IntCell &rhs){
    value= rhs.value;
}


//Sobrecarga de operador "="
IntCell &IntCell::operator= (const IntCell &rhs){
    if(value != rhs.value){
        this->value = rhs.value;
    }
    return *this;
}
IntCell &IntCell::operator= (int i){
    if(value != value){
        this->value = value;
    }
    return *this;
}

//Sobrecarga de operador "+"
IntCell &IntCell::operator+ (const IntCell &rhs){
    this->value = rhs.value + value;
    return *this;
}
IntCell &IntCell::operator+ (int i){
    this->value = i + value;
    return *this;
}

//Sobrecarga de operador "-"
IntCell &IntCell::operator- (const IntCell &rhs){
    this->value = rhs.value - value;
    return *this;
}
IntCell &IntCell::operator- (int i){
    this->value = i - value;
    return *this;
}

//Sobrecarga de operador *
IntCell &IntCell::operator* (IntCell &rhs){
    this->value = rhs.value * value;
    return *this;
}
IntCell &IntCell::operator* (int i){
    this->value = i * value;
    return *this;
}

//Sobrecarga de operador /
IntCell &IntCell::operator/ (IntCell &rhs){
    this->value = rhs.value / value;
    return *this;
}
IntCell &IntCell::operator/ (int i){
    this->value = i / value;
    return *this;
}

//Sobrecarga de operador %
IntCell IntCell::operator% (IntCell &rhs){
    int division = value / rhs.value;
    int multi = division * rhs.value;
    int residuo = value - multi;
    return IntCell(residuo);
}
IntCell IntCell::operator% (int i){
    int division = value / i;
    int multi = division * i;
    int residuo = value - multi;
    return IntCell(residuo);
}

//Sobrecarga de Operadores de comparacion ">"
bool IntCell::operator> (IntCell &rhs){
    return value > rhs.value;
}
bool IntCell::operator> (int i){
    return value > i;
}

//Sobrecarga de Operadores de comparacion "<"
bool IntCell::operator< (IntCell &rhs){
    return value < rhs.value;
}
bool IntCell::operator< (int i){
    return value < i;
}

//Sobrecarga de Operadores de comparacion "=="
bool IntCell::operator== (IntCell &rhs){
    return value == rhs.value;
}
bool IntCell::operator== (int i){
    return value == i;
}

//Sobrecarga de Operadores de comparacion "=>"
bool IntCell::operator>= (IntCell &rhs){
    return value >= rhs.value;
}
bool IntCell::operator>= (int i){
    return value >= i;
}

//Sobrecarga de Operadores de comparacion "=<"
bool IntCell::operator<= (IntCell &rhs){
    return value <= rhs.value;
}
bool IntCell::operator<= (int i){
    return value <= i;
}

//Sobrecarga de Operadores de comparacion "!="
bool IntCell::operator!= (IntCell &rhs){
return value != rhs.value;
}
bool IntCell::operator!= (int i){
return value != i;
}