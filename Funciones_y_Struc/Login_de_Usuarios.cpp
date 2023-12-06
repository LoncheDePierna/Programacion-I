#include<iostream>
#include<string>

int main()
{
    
struct persona{
    std::string usuario,contra;
};
    
    std::string inusuario,incontra;    
    
persona miguel;
miguel.usuario = "Miguelpro11";
miguel.contra = "perro123";


    std::cout << "Usuario: ";  
    std::cin >> inusuario; 
    
    std::cout << "Contraseña: ";  
    std::cin >> incontra;    
    
if (miguel.usuario == inusuario && miguel.contra == incontra){
    std::cout << "Iniciando sesion...";
} 
else if (miguel.usuario != inusuario || miguel.usuario != incontra){
    std::cout << "Te equivocaste";
}
    
    
}
