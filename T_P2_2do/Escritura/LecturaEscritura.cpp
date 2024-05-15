//
// Created by Diego on 14/05/2024.
//

#include <iostream>
#include <fstream>
#include <string>

struct Login{

    std::string usuario;
    std::string correo;
    std::string contra;

};

int main(){

    Login ingreso;
    std::cout << "Bienvenido ingresa tus datos" << std::endl;
    std::cout << std::endl << "Ingresa Usuario, Correo y Contrasena:" << std::endl;
    std::cin >> ingreso.usuario >> ingreso.correo >> ingreso.contra;

    std::ofstream Ing("BaseDatos.txt");
    if (!Ing.is_open()){
        std::cerr << "No abrio el archivo" << std::endl;
        return 2;
    }
    Ing << ingreso.usuario << " " << ingreso.contra << " " << ingreso.correo << "\r\n";
    Ing.close();

    std::ifstream Ong("BaseDatos.txt");
    if (!Ong.is_open()){
        std::cerr << "No abrio el archivo" << std::endl;
        return 1;
    }

    std::string usuario;
    std::string contra;
    std::string correo;
    while(Ong >> usuario >> contra >> correo)

        Ong.close();

    std::cout << "Tus datos de inicio de sesion son: " << "\r\n" << usuario << "\r\n" << contra << "\r\n" << correo;
    return 0;
}