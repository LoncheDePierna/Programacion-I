#include <iostream>

#include "Personaje.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Goblin.h"
#include "Orco.h"
#include "ConfiguracionesJuego.h"
#include "Item.h"
int main() {

    Mago player1(22, 8, "Fernando", "Male", 11, 9);
    Guerrero player2(19, 12, "Cristinini", "Female", 13, 7);
    Goblin saqueador(1, 3, "Ladron", "Cuchillo de caza");
    Orco machupichu(3, 12, "Tanque", "Mazo Maya");
    ConfiguracionesJuego partida1(19021080,68,5);
    BolaDeFuego Habilidad(2);
    Curar basicHeal(4);
    Personaje Javiersito (10,20);
    Item Pocion ("ElixirSagrado");
    Item Arma ("Excalibur");
    Item Almendra ("Almendra");

    std::cout << std::endl << "Venga tio hay que lootear estas cosas" << std::endl;
    player2.addItemInv(Arma);
    player1.addItemInv(Pocion);
    player1.delItemInv("Almendra");
    std::cout << std::endl << "Haber mi inventario" << std::endl;
    player2.mostrarInv();
    player1.delItemInv("ElixirSagrado");
    std::cout << std::endl << "Bua tio tire el elixir sin querer jolines" << std::endl;

    saqueador.setvida(5);
    saqueador.getvida();
    std::cout << std::endl << "ostia un goblin estrenare mi espada" << std::endl;
    std::cout << std::endl << "Player 2 Ataca a goblin";
    std::cout << std::endl << "aahhh no porfavor solo son un gobl";
    saqueador.RecibirDano(3);
    std::cout << std::endl << "bua necesito healing" << std::endl;
    Pocion.usar();

    std::cout << std::endl << "Javiersito: buaja buaja ja encontre un bug" << std::endl;
    Javiersito.addHabilidades(Habilidad);
    basicHeal.usar();
    std::cout << std::endl << "estoy chetadisimo" << std::endl;
    std::cout << std::endl << "centellas un ogro a aparecido" << std::endl;
    std::cout << std::endl << "Javiersito Ataca a machupichu ";
    Habilidad.usar();
    machupichu.RecibirDano(2);
    machupichu.getvida();
    std::cout << std::endl << "estoy rotisimo chaval" << std::endl;

    std::cout << std::endl << "Hay que cambiar los ajustes del juego" << std::endl;
    partida1.setResolution(720480);
    partida1.setlvlVolume(48);
    std::cout << std::endl << "dificultad 5 que papa" << std::endl;
    partida1.setlvlDifficult(10);


    std::cout << std::endl << std::endl << std::endl <<"Debug Log: " << std::endl << std::endl;
    return 0;
    //Clase Compuesta
    //aquella clase que tiene otra clase en su interior
    //inventario no hereda item pero usamos la clase item
}
