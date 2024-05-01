//
// Created by Alumnos on 09/04/2024.
//

#include "Animal.h"

#include <utility>

Animal::Animal(){
    this-> name = "N/A";
    this-> age = 0;
    this-> height = 0;
    this-> weight = 0;
}

Animal::Animal(const Animal &rhs){
    name = rhs.name;
    age = rhs.age;
    height = rhs.height;
    weight = rhs.weight;

}

Animal::Animal(std::string name, int age, float height, float weight){
    this-> name = std::move(name);
    this-> age = age;
    this-> height = height;
    this-> weight = weight;
}

void Animal::makeSound(){
  std::cout << "sound" << std::endl;
}

Animal::~Animal() = default;
