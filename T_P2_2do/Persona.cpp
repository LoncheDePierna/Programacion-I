//
// Created by Alumnos on 09/04/2024.
//

#include "Persona.h"

Persona::Persona(){
    this-> gender = "N/A";
    this-> name = "N/A";
    this-> age = 0;
    this-> height = 0;
    this-> weight = 0;
};

Persona::Persona(const Persona &rhs){
    gender = rhs.gender;
    name = rhs.name;
    age = rhs.age;
    height = rhs.height;
    weight = rhs.weight;

};

Persona::Persona(std::string gender, std::string name, int age, float height, float weight){
    this-> gender = gender;
    this-> name = name;
    this-> age = age;
    this-> height = height;
    this-> weight = weight;
};

std::string Persona::getGender() const {
    return gender;
}
void Persona::setGender(std::string gender) {
    this-> gender = gender;
}

std::string Persona::getName() const {
    return name;
}
void Persona::setName(std::string name) {
    this->name = name;
}

int Persona::getAge() const {
    return age;
}
void Persona::setAge(int age){
    this->age = age;
}

float Persona::getHeight() const {
    return height;
}
void Persona::setHeight(float height) {
    this->height = height;
}

float Persona::getWeight() const {
    return weight;
}
void Persona::setWeight(float weight) {
    this->weight = weight;
}
