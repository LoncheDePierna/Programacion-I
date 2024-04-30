#ifndef PROGRAMACION_I_ANIMAL_H
#define PROGRAMACION_I_ANIMAL_H

#include <iostream>
#include <string>

class Animal {

        public:

        Animal();//Default constructor
        Animal(const Animal &animal);// Copy constructor
        Animal(std::string name, int age, float height, float weight);//Parameters    constructor
        virtual ~Animal();//Destructor

        virtual void makeSound();

        private:

        std::string name;
        int age;
        float height;
        float weight;

};

#endif //PROGRAMACION_I_ANIMAL_H
