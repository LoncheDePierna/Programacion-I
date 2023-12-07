#ifndef Proyecto_h
#define Proyecto_h

#include <string>
#include <iostream>
#include <random>
#include <chrono>

using namespace std;
using namespace chrono;

class seguro {

public:
    seguro(string nombre, int edad, string curp, int monto, int deducible){
        this->nombre = nombre;
        this->edad = edad;
        this->curp = curp;
        this->monto = monto;
        this->deducible = deducible;
    };

    //Setters
    void setnombre(){
        cout << "Nombre completo: ";
        cin >>nombre;
        this->nombre = nombre;
    };
    void setedad(){
      cout << "Edad: ";
      cin >> edad;
      this->edad = edad;
    };
    void setcurp(){
        cout << "Curp: ";
        cin >> curp;
        this->curp = curp;
    };
    void setmonto(){
        cout << "Monto del seguro: ";
        cin >> monto;
        this->monto = monto;
    };
    void setdeducible(){
        cout << "Deducible: ";
        cin >> deducible;
        this->deducible = deducible;
    };

    string fnacimiento(int edad) {
        auto fnacimiento = system_clock::to_time_t(system_clock::now() - hours(edad * 365 * 24));
        tm* tmfnacimiento = localtime(&fnacimiento);

        string fnacimientoStr = to_string(tmfnacimiento->tm_mday) + "/" +
                                    to_string(tmfnacimiento->tm_mon + 1) + "/" +
                                    to_string(tmfnacimiento->tm_year + 1900);
        return fnacimientoStr;
    }

    //Getters
    string getnombre(){
        cout << "Nombre Completo: " << nombre << endl;
        return this->nombre;
    };
    int getedad(){
        cout << "Edad: " << edad << endl;
        return this->edad;
    };
    string getcurp(){
        cout << "Curp: " << curp << endl;
        return this->curp;
    };
    int getmonto(){
        cout << "Monto del seguro: $" << monto << endl;
        return this->monto;
    };
    int getdeducible(){
        cout << "Deducible: $" << monto * 0.2 << endl;
        return this->deducible;
    };
    string getnacimiento() {
        cout << "Fecha de Nacimiento: " << fnacimiento(edad) << endl;
    };

private:
    string nombre;
    string curp;
    int edad;
    int monto;
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
    void setanio(){
        cout << "Anio: ";
        cin >> anio;
        this->anio = anio;
    };
    void setkilo(){
        cout << "Kilometraje: ";
        cin >> kilo;
        this->kilo = kilo;
    };
    void setmodelo(){
        cout << "Modelo: ";
        cin >> modelo;
        this->modelo = modelo;
    };
    void setnserie(){
        cout << "Numero de Serie: ";
        cin >> nserie;
        this->nserie = nserie;
    };
    void setmarca(){
        cout << "Marca: ";
        cin >> marca;
        this->marca = marca;
    };
    //Getters
    int getanio(){
        cout << "Anio: "<< anio << endl;
        return this->anio;
    };
    int getkilo(){
        cout << "Kilometraje: "<< kilo << "km"<< endl;
        return this->kilo;
    };
    string getmodelo(){
        cout << "Modelo: "<< modelo << endl;
        return this->modelo;
    };
    string getnserie(){
        cout << "Numero de Serie: "<< nserie << endl;
        return this->nserie;
    };
    string getmarca(){
        cout << "Marca: " << marca << endl;
        return this->marca;
    };

private:
    int anio;
    int kilo;
    string modelo;
    string nserie;
    string marca;
};

class vida : public seguro{
public:
    vida(bool enfermo, string sangre, string nombre, int edad, string curp, int prestamo, int deducible) : seguro(nombre, edad, curp, prestamo, deducible){
        this->enfermo = enfermo;
        this->sangre = sangre;
    };
    //Setters
    void setenfermo(){
        cout << "Tienes alguna enfermedad: ";
        cin >> enfermo;
        this->enfermo = enfermo;
    };
    void setsangre(){
        cout << "Tipo de Sangre: ";
        cin >> sangre;
        this->sangre = sangre;
    };
    //Getters
    int getenfermo(){
        cout << "Padeze alguna enfermedad: " << enfermo << endl;
        return this->enfermo;
    };
    string getsangre(){
        cout << "Tipo de sangre: " << sangre << endl;
        return this->sangre;
    };

private:
    bool enfermo;
    string sangre;
};

class casa : public seguro{
public:
    casa(int tamanio, string direccion, int anio, string nombre, int edad, string curp, int prestamo, int deducible) : seguro(nombre, edad, curp, prestamo, deducible){
        this->tamanio = tamanio;
        this->direccion = direccion;
        this->anio = anio;
    };
    //Setters
    void settamanio(){
        cout << "Tamano de la casa en m2: ";
        cin >> tamanio;
        this->tamanio = tamanio;
    };
    void setdireccion(){
        cout << "Direccion: ";
        cin >> direccion;
        this->direccion = direccion;
    };
    void setanio(){
        cout << "Anio de la casa: ";
        cin >> anio;
        this->anio = anio;
    };
    //Getters
    int gettamanio(){
        cout << "Tamanio en m2: " << tamanio << "m2"<< endl;
        return this->tamanio;
    };
    string getdireccion(){
        cout << "Direccion: " << direccion << endl;
        return this->direccion;
    };
    int getanio(){
        cout << "Anio de la casa: " << anio << endl;
        return this->anio;
    };
private:
    int tamanio;
    int anio;
    string direccion;
};

void Menu(){
    string marca;
    int modo;
    cout << "CREA TU POLIZA EN LINEA" << endl << endl;
    cout << "Selecciona el tipo de Poliza" << endl;
    cout << "Seguro de Carro / 1" << endl;
    cout << "Seguro de Vida  / 2" << endl;
    cout << "Seguro de Casa  / 3" << endl;
    cout << "                R= ";
    cin >> modo;

    std::random_device folio;
    std::mt19937 crear(folio());
    std::uniform_int_distribution<long long> rango(10000000, 99999999);
    long long nfolio = rango(crear);

    switch(modo){
        case 1:{
            carro carro(1, 1, "", "", "", "", 1, "", 1, 1);
            cout << "Rellena los Siguientes Datos" << endl << endl;
            carro.setnombre();
            carro.setedad();
            carro.setcurp();
            carro.setmonto();
            carro.setmarca();
            carro.setmodelo();
            carro.setanio();
            carro.setnserie();
            carro.setkilo();

            cout << endl << "TU POLIZA FUE CRADA CON EXITO" << endl << endl;
            carro.getmarca();
            carro.getmodelo();
            carro.getanio();
            carro.getkilo();
            carro.getnserie();
            carro.getmonto();
            cout << "Deducible: 5%" << endl;
            cout << "Numero de Folio: " << nfolio << endl;
            carro.getcurp();
            carro.getnombre();
            carro.getedad();
            carro.getnacimiento();
        }
            break;
        case 2:{
            vida vida(true, "", "", 1, "", 1, 1);
            cout << "Rellena los Siguientes Datos" << endl << endl;
            vida.setnombre();
            vida.setedad();
            vida.setcurp();
            vida.setmonto();
            vida.setenfermo();
            vida.setsangre();

            cout << endl << "TU POLIZA FUE CRADA CON EXITO" << endl << endl;
            vida.getmonto();
            vida.getdeducible();
            vida.getenfermo();
            vida.getsangre();
            vida.getcurp();
            cout << "Numero de Folio: " << nfolio << endl;
            vida.getnombre();
            vida.getedad();
            vida.getnacimiento();
        }
            break;
        case 3:{
            casa casa(1, "", 1, "", 1, "", 1, 1);
            cout << "Rellena los Siguientes Datos" << endl << endl;
            casa.setnombre();
            casa.setedad();
            casa.setcurp();
            casa.setmonto();
            casa.setdireccion();
            casa.setanio();
            casa.settamanio();

            cout << endl << "TU POLIZA FUE CRADA CON EXITO" << endl << endl;
            casa.getdireccion();
            casa.gettamanio();
            casa.getanio();
            casa.getmonto();
            casa.getdeducible();
            cout << "Numero de Folio: " << nfolio << endl;
            casa.getcurp();
            casa.getnombre();
            casa.getedad();
            casa.getnacimiento();
        }
            break;
        default:
            exit ( 0);
    }
}
#endif