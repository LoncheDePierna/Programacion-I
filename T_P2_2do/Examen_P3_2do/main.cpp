/*
#include "Jugador.h"
#include "Enemigo.h"
#include <iostream>

int main() {
    //Jugador le falta daño enemigo la vida
    Jugador jugador("Heroe", 100, 50);
    Enemigo enemigo("Orco", 80, 15);

    Item espada("Espada", "Arma");
    Item escudo("Escudo", "Defensa");

    jugador.agregarItem(espada);
    jugador.agregarItem(escudo);

    std::cout << "\n--- Información del Jugador ---" << std::endl;
    jugador.mostrarInformacion();

    std::cout << "\n--- Información del Enemigo ---" << std::endl;
    enemigo.mostrarInformacion();

    std::cout << "\n--- Usar Item ---" << std::endl;
    jugador.usarItem("Espada");

    std::cout << "\n--- Inventario después de usar Espada ---" << std::endl;
    jugador.mostrarItems();

    std::cout << "\n--- Eliminar Item ---" << std::endl;
    jugador.eliminarItem("Escudo");

    std::cout << "\n--- Inventario después de eliminar Escudo ---" << std::endl;
    jugador.mostrarItems();

    return 0;
}
*/

#include <iostream>
#include "Jugador.h"
#include "Enemigo.h"
#include "BolaDeFuego.h"
#include "Item.h"

int main() {
auto* jugador = new Jugador("Jugador",100,10,100);
auto* enemigo = new Enemigo("Enemigo",10,5,50);
auto* habilidad = new BolaDeFuego("Bola de fuego",10,10,10);
auto* objeto = new Item("Espada","Arma");
jugador->agregarItem(*objeto);
jugador->agregarHabilidad("Bola de fuego");
jugador->usarHabilidad("Bola de fuego");
jugador->mostrarInfo();
enemigo->mostrarInfo();
delete jugador;
delete enemigo;
delete habilidad;
return 0;
}
