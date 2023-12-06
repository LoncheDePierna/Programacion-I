#ifndef PROYECTOS_INSURANCES_H
#define PROYECTOS_INSURANCES_H

#include <string>
#include <iostream>
#include <variant>
using namespace std;

class seguro {

public:
    seguro(string nombre, int edad, string curp, int prestamo, int deducible){
        this->nombre = nombre;
        this->edad = edad;
        this->curp = curp;
        this->prestamo = prestamo;
        this->deducible = deducible;
    };

    //Setters
    void setnombre(string nombre){
        cout << "Nombre completo: ";
        cin >>nombre;
        this->nombre = nombre;
    };
    void setedad(int edad){
      cout << "Edad: ";
      cin << edad;
      this->edad = edad;
    };
    void setcurp(string curp){
        cout << "Curp: ";
        cin << curp;
        this->curp = curp;
    };
    void setprestamo(int prestamo){
        cout << "Cantidad del Prestamo: ";
        cin << prestamo;
        this->prestamo = prestamo;
    };
    void setdeducible(int deducible){
        cout << "Deducible: ";
        cin << deducible;
        this->deducible = deducible;
    };
    //Getters
    string getnombre(){
        cout << "Nombre Completo: ";
        return this->nombre;
    };
    int getedad(){
        cout << "Edad: ";
        return this->edad;
    };
    string getcurp(){
        cout << "Curp: ";
        return this->curp;
    };
    int getprestamo(){
        cout << "Cantidad del prestamo: ";
        return this->prestamo;
    };
    int getdeducible(){
        cout << "Deducible: ";
        return this->deducible;
    };

private:
    string nombre;
    string curp;
    int edad;
    int prestamo;
    int deducible;
    };

class carro : public seguro{
public:
    carro(int anio, int kilo, string modelo, string nserie, string marca, string nombre, int edad, string curp, int prestamo, int deducible) : seguro(nombre, edad, curp, prestamo, deducible){
        this->anio = anio;
        this->kilo = kilo;
        this->modelo = modelo;
        this->nserie = nserie;
        this->marca = marca;
    };
    //Setters
    void setanio(int anio){
        cout << "Anio: ";
        cin << anio;
        this->anio = anio;
    };
    void setkilo(int kilo){
        cout << "Kilometraje: ";
        cin << kilo;
        this->kilo = kilo;
    };
    void setmodelo(string modelo){
        cout << "Modelo: ";
        cin << modelo;
        this->modelo = modelo;
    };
    void setnserie(string nserie){
        cout << "Numero de Serie: ";
        cin << nserie;
        this->nserie = nserie;
    };
    void setmarca(string marca){
        cout << "Marca: ";
        cin << marca;
        this->marca = marca;
    };
    //Getters
    int getanio(){
        return this->anio;
    };
    int getkilo(){
        return this->kilo;
    };
    string getmodel(){
        return this->model;
    };
    string getnserie(){
        return this->nserie;
    };
    string getmarca(){
        return this->marca;
    };

private:
    int anio;
    int kilo;
    string modelo;
    string nserie;
    string marca;
};
//bool enfermo, string sangre,
class vida : public seguro{
public:
    vida(bool enfermo, string sangre, string nombre, int edad, string curp, int prestamo, int deducible) : seguro(nombre, edad, curp, prestamo, deducible){
        this->enfermo = enfermo;
        this->sangre = sangre;
    };
    //Setters
    void setenfermo(bool enfermo){
        cout << "Tienes alguna enfermedad: ";
        cin << enfermo;
        this->enfermo = enfermo;
    };
    void setsangre(string sangre){
        cout << "Tipo de Sangre: ";
        cin << sangre;
        this->sangre = sangre;
    };
    //Getters
    int getenfermo(){
        return this->enfermo;
    };
    int getsangre(){
        return this->sangre;
    };

private:
    bool enfermo;
    string sangre;
};

variant<carro> Menu(){
    int modo;
    cout << "CREA TU POLIZA EN LINEA" << endl << endl;
    cout << "Selecciona el tipo de Poliza" << endl;
    cout << "Seguro de Carro / 1"
    cout << "Seguro de Vida  / 2"
    cout << "Seguro de Casa  / 3"
    cin >> modo;

    switch(modo){
        case 1:{
            carro carro;
            return carro;
        }
            break;
        case 2:{
            vida vida;
            return vida;
        }
            break;
        case 3:{
            casa casa;
            return casa;
        }
            break;
        default:
            exit ( 0)
    }

}



#endif


int main(){
    cout << "incio";
};




//Póliza de Vida:

//Información personal:
// Nombre , dirección , edad (fecha de nacimiento), género, estado civil, ocupación.

//Monto de cobertura:
// Dinero que desea para sus beneficiarios en caso de muerte.

//Beneficiarios:
// Nombre y detalles de contacto.

//Historial médico y financiero:
// historial médico incluyendo enfermedades preexistentes, y detalles financieros, como ingresos y deudas.

//system("cls");

//librerias
//Poo
//Punteros

//póliza de seguros: nombre, CURP, fecha de nacimiento calcula la edad, deducible, montón maximo
//herencia: seguro de vida(enfermedades, tipo de sangre, edad), de carro(kilometraje, modelo, num de serie, marca, año) , hogar (tamaño m2, ubicación, antigüedad)

//string nombre, int edad, string curp, int prestamo, int deducible
//casa
//string tamaño, direccion, año
//vida
//bool enfermo, string sangre,
//coche
//int año, int kilo, string modelo, string nserie, string marca