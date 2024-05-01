//
// Created by Alumnos on 16/04/2024.
//

#include "PoderesMagicos.h"

PoderesMagicos::PoderesMagicos(){
    this-> bolaFuego = false;
    this-> lanzaRayo = false;
    this-> disparoAgua = false;
};

PoderesMagicos::PoderesMagicos(const PoderesMagicos &rhs){
    bolaFuego = rhs.bolaFuego;
    lanzaRayo = rhs.lanzaRayo;
    disparoAgua = rhs.disparoAgua;
};

PoderesMagicos::PoderesMagicos(bool bolaFuego, bool lanzaRayo, bool disparoAgua){
    this-> bolaFuego = bolaFuego;
    this-> lanzaRayo = lanzaRayo;
    this-> disparoAgua = disparoAgua;
};

bool PoderesMagicos::getbolaFuego() const {
    return bolaFuego;
}
void PoderesMagicos::setbolaFuego(bool bolaFuego) {
    this-> bolaFuego = bolaFuego;
}

bool PoderesMagicos::getlanzaRayo() const {
    return lanzaRayo;
}
void PoderesMagicos::setlanzaRayo(bool lanzaRayo) {
    this->lanzaRayo = lanzaRayo;
}

bool PoderesMagicos::getdisparoAgua() const {
    return disparoAgua;
}
void PoderesMagicos::setdisparoAgua(bool disparoAgua){
    this->disparoAgua = disparoAgua;
}
