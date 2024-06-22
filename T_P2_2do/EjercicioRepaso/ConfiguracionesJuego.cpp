//
// Created by Alumnos on 18/06/2024.
//

#include "ConfiguracionesJuego.h"

    ConfiguracionesJuego::ConfiguracionesJuego() {
    this -> resolution = 0;
    this -> volume = 0;
    this -> difficult = 0;
}

    ConfiguracionesJuego::ConfiguracionesJuego(int resolution, int volume, int difficult) {
    this -> resolution = resolution;
    this -> volume = volume;
    this -> difficult = difficult;
}

int ConfiguracionesJuego::getResolution() const {
    return resolution;
}
void ConfiguracionesJuego::setResolution(int resolution) {
    this-> resolution = resolution;
}

int ConfiguracionesJuego::getlvlVolume() const {
    return volume;
}
void ConfiguracionesJuego::setlvlVolume(int volume) {
    this-> volume = volume;
}
int ConfiguracionesJuego::getlvlDifficult() const {
    return difficult;
}
void ConfiguracionesJuego::setlvlDifficult(int difficult) {
    this-> difficult = difficult;
}

ConfiguracionesJuego::~ConfiguracionesJuego(){
    std::cout << "ConfiguracionesJuego destruida";
}