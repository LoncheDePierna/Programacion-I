#include "Int.h"

//Constructor Implícito
IntCell::IntCell(){
    this-> value = 0;
};
//Constructor Explícito por copia
IntCell::IntCell(int value){
    this-> value=value;
};
//Constructor Explícito por Parámetros
IntCell::IntCell(const IntCell &rhs){
    value= rhs.value;
};

//Sobrecarga de operador "="
IntCell &IntCell::operator= (const IntCell &rhs){
    this->value = rhs.value;
    return *this;
}
IntCell &IntCell::operator= (int i){
    this->value = i;
    return *this;
}

IntCell &IntCell::operator+ (const IntCell &rhs){
    this->value = rhs.value;
    return *this;
}
IntCell &IntCell::operator+ (int i){
    this->value = i;
    return *this;
}

IntCell &IntCell::operator- (const IntCell &rhs){
    this->value = rhs.value;
    return *this;
}
IntCell &IntCell::operator- (int i){
    this->value = i;
    return *this;
}

IntCell &IntCell::operator* (IntCell &rhs){
    this->value = rhs.value;
    return *this;
}
IntCell &IntCell::operator* (int i){
    this->value = i;
    return *this;
}

IntCell &IntCell::operator/ (IntCell &rhs){
    this->value = rhs.value;
    return *this;
}
IntCell &IntCell::operator/ (int i){
    this->value = i;
    return *this;
}

IntCell &IntCell::operator% (IntCell &rhs){
    this->value = rhs.value;
    return *this;
}
IntCell &IntCell::operator% (int i){
    this->value = i;
    return *this;
}