//
// Created by Alumnos on 07/05/2024.
//
#include <iostream>
#include <fstream>
#include <string>

struct Login{

    std::string usuario;
    std::string correo;
    std::string contra;

};

bool isValidEmail(const std::string &correo){
    return correo.find('@');
}



int main(){

Login ingreso;
std::cout << "Bienvenido ingresa tus datos" << std::endl;
std::cout << std::endl << "Ingresa Usuario, Correo y Contrasena:" << std::endl;
std::cin >> ingreso.usuario >> ingreso.correo >> ingreso.contra;

std::ofstream Ing("BD.txt");
if (!Ing.is_open()){
    std::cerr << "No abrio el archivo" << std::endl;
    return 1;
}
    Ing << ingreso.usuario << " " << ingreso.contra << " " << ingreso.correo << "\r\n";
    Ing.close();
    return 0;
}