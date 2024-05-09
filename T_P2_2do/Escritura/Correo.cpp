//
// Created by Alumnos on 07/05/2024.
//
#include <iostream>
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
std::cout << std::endl << "Ingresa Usuario, Correo y Contrasena: ";
std::cin >> ingreso.usuario >> ingreso.correo >> ingreso.contra;

std::ofstream Ing("BD.txt");
if (!Ing.is_open()){
    std::cerr << "No abrio el archivo" << std::endl;
}

Ing.open("BD.txt")
Ing.close();

}