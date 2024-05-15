//
// Created by Alumnos on 09/05/2024.
//

#include <iostream>
#include <fstream>
#include <string>


int main() {

    std::ifstream Ing("BD.txt");
    if (!Ing.is_open()){
        std::cerr << "No abrio el archivo" << std::endl;
        return 1;
    }

    std::ifstream Ing("BD.txt");
    std::string usuario;
    std::string contra;
    std::string correo;
    while(Ing >> usuario >> contra >> correo)

    Ing.close();

    std::cout << "Tus datos de inicio de sesion son: " << "\r\n" << usuario << "\r\n" << contra << "\r\n" << correo;
    return 0;
}
