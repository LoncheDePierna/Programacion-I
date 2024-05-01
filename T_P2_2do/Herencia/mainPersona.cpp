//
// Created by Alumnos on 09/04/2024.
//

#include "Jinchuriki.h"
#include "Protagonista.h"

int main(){

    Persona Miguel("Hombre", "Miguel", 23, 1.78, 61.7);
    Ninja Hernestito("Hombre", "Miguel", 23, 1.78, 61.7,"Konoha","Fuego",27);
    Sannin Pepe("Hombre", "Pepe", 89, 1.54, 34.7, "Papulandia", "Viento", 42, "Axor", "Capybara", "explocion");
    Jinchuriki Kriko("Mujer", "Kriko", 11, 1.23, 19.7, "LeguionHulk", "Todos", 1209, "elGraso", "Gorigorigo", "Terremoto", "Kazekage", "Polvo", "230", 1000000,9,"Tilin");
    Protagonista RimuruTempest("N/A", "Rimuru Tempest", 71, 1.42, 49, true, false, true, true, false, false);

    std::cout << Miguel.getAge() << std::endl;
    std::cout << Hernestito.getAldea()<< std::endl;
    std::cout << Pepe.getApodo()<< std::endl;
    std::cout << Kriko.getbestia()<< std::endl;
    std::cout << RimuruTempest.getregeneracion()<< std::endl;
}