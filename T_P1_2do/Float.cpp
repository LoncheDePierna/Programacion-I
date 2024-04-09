#include "Float.h"


FloatCell::FloatCell(){
    this-> value = 0;
};

FloatCell::FloatCell(float value){
    this-> value=value;
};

FloatCell::FloatCell(const FloatCell &rhs){
    value= rhs.value;
};

FloatCell &FloatCell::operator= (const FloatCell &rhs){
    this->value = rhs.value;
    return *this;
}
FloatCell &FloatCell::operator= (float i){
    this->value = i;
    return *this;
}

FloatCell &FloatCell::operator+ (const FloatCell &rhs){
    this->value = rhs.value;
    return *this;
}
FloatCell &FloatCell::operator+ (float i){
    this->value = i;
    return *this;
}

FloatCell &FloatCell::operator- (const FloatCell &rhs){
    this->value = rhs.value;
    return *this;
}
FloatCell &FloatCell::operator- (float i){
    this->value = i;
    return *this;
}

FloatCell &FloatCell::operator* (FloatCell &rhs){
    this->value = rhs.value;
    return *this;
}
FloatCell &FloatCell::operator* (float i){
    this->value = i;
    return *this;
}

FloatCell &FloatCell::operator/ (FloatCell &rhs){
    this->value = rhs.value;
    return *this;
}
FloatCell &FloatCell::operator/ (float i){
    this->value = i;
    return *this;
}

FloatCell &FloatCell::operator% (FloatCell &rhs){
    this->value = rhs.value;
    return *this;
}
FloatCell &FloatCell::operator% (float i){
    this->value = i;
    return *this;
}