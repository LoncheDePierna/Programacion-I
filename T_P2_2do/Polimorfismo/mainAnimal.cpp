
#include "Animal.h"
#include "Dog.h"

int main(){
    Animal Animal("Animal", 0, 0, 0);
    Animal.makeSound();

    Dog Dog("Canelo", 6, 0.87, 37.4);
    Dog.makeSound();
}