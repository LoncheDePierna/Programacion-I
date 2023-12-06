#include <iostream>
#include <string>

class Animal {
    
    public:
        Animal(std::string nombre) {
        this->nombre = nombre;
        }
    
        void comer() {
            std::cout << "Tu " << nombre << " esta comiendo, ñam ñam" << std::endl;
        }
        
        void dormir() {
            std::cout << "Tu " << nombre << " se fua a dormir, Zzz Zzz" << std::endl;
        }
        
        std::string nombre;    
        
    private:
        
};

class Perro : public Animal {
    
    public:
        Perro(std::string nombre, std::string raza, int edad) : Animal(nombre) {
            this->raza = raza;
            this->edad = edad;
        }
        
        void ladrar() {
            std::cout << nombre << " esta ladrando" << std::endl;
        }        

        std::string raza;
        int edad;    
        
    private:    
    
};


int main(){

    Perro Miguel("Angelito", "Pitbull", 20);
    Miguel.ladrar();
    return 0;
    
}
