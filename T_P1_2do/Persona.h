#ifndef PROGRAMACION_I_PERSONA_H
#define PROGRAMACION_I_PERSONA_H

#include <iostream>
#include <string>

class Persona {

        public:

        Persona() = default;//Default constructor
        Persona(const Persona &persona);// Copy constructor
        Persona(std::string gender, std::string name, int age, float height, float weight);//Parameters    constructor
        ~Persona() = default;//Destructor

        std::string getGender() const;
        void setGender(std::string gender);

        std::string getName() const;
        void setName(std::string name);

        int getAge() const;
        void setAge(int Age);

        float getHeight() const;
        void setHeight(float height);

        float getWeight() const;
        void setWeight(float weight);

        private:

        std::string gender;
        std::string name;
        int age;
        float height;
        float weight;
};

#endif //PROGRAMACION_I_PERSONA_H
