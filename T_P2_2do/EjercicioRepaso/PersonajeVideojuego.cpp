//
// Created by Alumnos on 11/06/2024.
//

#include "PersonajeVideojuego.h"

PersonajeVideojuego::PersonajeVideojuego(){
    this -> lvl = 0;
    this -> vida = 0;
    this -> nombre = " ";
    this -> gender = " ";
}

PersonajeVideojuego::PersonajeVideojuego(int lvl, int vida, std::string nombre, std::string gender) {
    this -> lvl = lvl;
    this -> vida = vida;
    this -> nombre = nombre;
    this -> gender = gender;
}

int PersonajeVideojuego::getlvl() const {
    return lvl;
}
void PersonajeVideojuego::setlvl(int lvl) {
    this-> lvl = lvl;
}
int PersonajeVideojuego::getvida() const {
    return vida;
}
void PersonajeVideojuego::setvida(int lvl) {
    this-> vida = vida;
}
std::string PersonajeVideojuego::getnombre() const {
    return nombre;
}
void PersonajeVideojuego::setnombre(std::string nombre) {
    this-> nombre = nombre;
}
std::string PersonajeVideojuego::getgender() const {
    return gender;
}
void PersonajeVideojuego::setgender(std::string gender) {
    this-> gender = gender;
}

void PersonajeVideojuego::Ataque(){
    std::cout << "Ataque" << std::endl;
}

PersonajeVideojuego::~PersonajeVideojuego() {
    std::cout << "PersonajeVideojuego Destruido" << std::endl;
}