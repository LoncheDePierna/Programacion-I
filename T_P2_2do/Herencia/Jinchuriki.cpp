//
// Created by Diego on 11/04/2024.
//

#include "Jinchuriki.h"

Jinchuriki::Jinchuriki() : Kage(){
    this-> mCausadas = 0;
    this-> nColas = 0;
    this-> bestia = "N/A";
};

Jinchuriki::Jinchuriki(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica, std::string tkage, std::string eunico, std::string husadas, int mCausadas, int nColas, std::string bestia) : Kage(gender, name, age, height, weight, aldea, tChakra, nvlChakra, tkage, eunico, husadas, tkage, eunico, husadas){
    this-> mCausadas = mCausadas;
    this-> nColas = nColas;
    this-> bestia = bestia;
}

Jinchuriki::Jinchuriki(const Jinchuriki &rhs) : Kage(rhs){
    mCausadas = rhs.mCausadas;
    nColas = rhs.nColas;
    bestia = rhs.bestia;
}

int Jinchuriki::getmCausadas() const {
    return mCausadas;
}
void Jinchuriki::setmCausadas(int mCausadas) {
    this-> mCausadas = mCausadas;
}

int Jinchuriki::getnColas() const {
    return nColas;
}
void Jinchuriki::setnColas(int nColas) {
    this-> nColas = nColas;
}

std::string Jinchuriki::getbestia() const {
    return bestia;
}
void Jinchuriki::setbestia(std::string bestia){
    this-> bestia = bestia;
}