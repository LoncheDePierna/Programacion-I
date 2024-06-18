#include <iostream>

#include "PersonajeVideojuego.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Goblin.h"
#include "Orco.h"
#include "Habilidad.h"
int main() {

    Mago player1(22, 8, "Fernando", "Male", 11, 9);
    Guerrero player2(19, 12, "Cristinini", "Female", 13, 7);
    Goblin saqueador(1, 3, "Ladron", "Cuchillo de caza");
    Orco machupichu(3, 12, "Tanque", "Mazo Maya");
    PersonajeVideojuego Karmaland5(0,0,"Stax", "Binary");
    Habilidad CacaDeMono;

    player2.addItemInv("Espada Sagrada");
    player1.addItemInv("Pocion de Mana");
    player1.delItemInv("Pocion de Vida");
    player2.mostrarInv();
    player1.delItemInv("Pocion de Mana");

    std::cout << "Player 2 Ataca a goblin";
    saqueador.setvida(5);
    saqueador.getvida();
    saqueador.RecibirDano(3);

    Karmaland5.addHabilidades(CacaDeMono);


    std::cout << std::endl << std::endl <<"Debug Log: " << std::endl << std::endl;
    return 0;
    //Clase Compuesta
    //aquella clase que tiene otra clase en su interior
    //inventario no hereda item pero usamos la clase item
}
