//
// Created by Diego on 11/04/2024.
//

#ifndef PROYECTOS_IPV_AAST_JINCHURIKI_H
#define PROYECTOS_IPV_AAST_JINCHURIKI_H


#include "Kage.h"

class Jinchuriki : Kage {

public:

    Jinchuriki();//Default constructor
    Jinchuriki(const Jinchuriki &jinchuriki);// Copy constructor
    Jinchuriki(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra, std::string apodo, std::string invocacion, std::string aUnica, std::string tkage, std::string eunico, std::string husadas, int mCausadas, int nColas, std::string bestia);//Parameters    constructor
    ~Jinchuriki() = default;//Destructor

    int getmCausadas() const;
    void setmCausadas(int mCausadas);

    int getnColas() const;
    void setnColas(int nColas);

    std::string getbestia() const;
    void setbestia(std::string bestia);

private:

    int mCausadas;
    int nColas;
    std::string bestia;

};

#endif //PROYECTOS_IPV_AAST_JINCHURIKI_H
