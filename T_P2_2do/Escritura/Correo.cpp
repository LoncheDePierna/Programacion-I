//
// Created by Alumnos on 07/05/2024.
//

#include <string>

Struct Login{

    std::string usuario;
    std::string correo;
    std::string contra;

}

bool isValidEmail(const std::string &correo){
    return correo.find("@");
}





int main(){

Login ingreso;
std::cout << "Bienvenido ingresa tus datos" << std::endl;
std::cout << std::endl << "Ingresa Usuario, Correo y Contrasena: ";
std::cin >> ingreso.usuario >> ingreso.correo >> ingreso.contra;

std::ofstream Ing("BD.text");
if (!Ing.is_open()){
}
Ing << ingreso.usuario << "_" << ingreso.correo << "_" << ingreso.contra << "\r\n";
Ing.close();

}