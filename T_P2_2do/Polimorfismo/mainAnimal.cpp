
#include "Animal.h"

#include "Dog.h"
#include "Capybara.h"
#include "Avestruz.h"
#include "Pinguino.h"
#include "Pajaro.h"
#include "Gallina.h"
#include "Canguro.h"

int main(){
    Animal Animalito;
    Animalito.makeSound();

    Dog Perrito;
    Perrito.makeSound();

    Capybara Carpincho;
    Carpincho.makeSound();

    Avestruz Manchas;
    Manchas.makeSound();

    Animal *Canelo = new Pinguino();
    Canelo -> makeSound();

    Animal *Tilin = new Pajaro();
    Tilin -> makeSound();

    Animal *Hernesto = new Gallina();
    Hernesto -> makeSound();

    Animal *Camaleon = new Canguro();
    Camaleon -> makeSound();

}