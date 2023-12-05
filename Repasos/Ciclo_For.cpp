#include <iostream>
using namespace std;

// Calcular ahorros
float ahorros(int edad, float sueldo){
    
    float total = 0;
    float ahorro = sueldo * 0.10;

    for (int i = 0; i < 65 - edad; ++i){
        total += ahorro;
    }

    return total;
}
// Calcular años
int años(int edad){
    int restante;
    restante = 65 - edad;
    return restante;
}

int main(){
    
    int edad;
    string nombre;
    string ocupacion;
    float sueldo;

    cout<< "Llena el siguiente formulario:"<< endl;
    
    cout<< " ● Nombre: ";
    cin >> nombre;
    cout<< " ● Edad: ";
    cin >> edad;    
    cout<< " ● Ocupación: ";
    cin >> ocupacion;    
    cout<< " ● Sueldo: ";
    cin >> sueldo;
    
    cout<< endl;
    cout<< "Calculando..."<< endl;
    
    cout << "Te faltan "<< años(edad) << " años para tu jubilación. En tu jubilación a los 65 años tendrás: $" << ahorros(edad, sueldo)<<endl;

    return 0;
}
