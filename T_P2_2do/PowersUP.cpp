//
// Created by Alumnos on 16/04/2024.
//

#include "PowersUP.h"

PowersUP::PowersUP(){
    this-> regeneracion = false;
    this-> ojoMagico = false;
    this-> superFuerza = false;
};

PowersUP::PowersUP(const PowersUP &rhs){
    regeneracion = rhs.regeneracion;
    ojoMagico = rhs.ojoMagico;
    superFuerza = rhs.superFuerza;
};

PowersUP::PowersUP(bool regeneracion, bool ojoMagico, bool superFuerza){
    this-> regeneracion = regeneracion;
    this-> ojoMagico = ojoMagico;
    this-> superFuerza = superFuerza;
};

bool PowersUP::getregeneracion() const {
    return regeneracion;
}
void PowersUP::setregeneracion(bool regeneracion) {
    this-> regeneracion = regeneracion;
}

bool PowersUP::getojoMagico() const {
    return ojoMagico;
}
void PowersUP::setojoMagico(bool ojoMagico) {
    this->ojoMagico = ojoMagico;
}

bool PowersUP::getsuperFuerza() const {
    return superFuerza;
}
void PowersUP::setsuperFuerza(bool superFuerza){
    this->superFuerza = superFuerza;
}
