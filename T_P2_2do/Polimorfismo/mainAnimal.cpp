
#include "Animal.h"
#include "Dog.h"
#include "Capybara.h"
#include "Avestruz.h"

int main(){
    Animal Animal("Animal", 0, 0, 0);
    Animal.makeSound();

    Dog Dog("Canelo", 6, 0.87, 37.4,"Malenois","Blanco con Manchitas Amarillos color azul");
    Dog.makeSound();

    Capybara Capybara("Pedrito", 6, 0.87, 37.4,"Hostil","Lechuga con adereso chedar");
    Capybara.makeSound();

    Avestruz Avestruz("MarcianoLoco", 6, 0.87, 37.4,"Rojo Fuxia","2");
    Avestruz.makeSound();

}