//
// Created by Alumnos on 09/05/2024.
//

#include <iostream>
#include <string>

int main(){

    std::ifstream Ing("BD.txt");
    if (!Ing.is_open()){
        std::cerr << "No abrio el archivo" << std::endl;
    }

    Ing.open("BD.txt")
    std::string Line;
    while(ing >> usuario >> contra >> correo){


    }


    Ing.close();

}