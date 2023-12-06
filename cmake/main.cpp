#ifndef PROYECTOS_INSURANCES_H
#define PROYECTOS_INSURANCES_H

#include <string>
#include <iostream>
using namespace std;

class seguro {

public:
    seguro(string name, string desc, int price, int cover, int id, string curp, int age){
        this->name = name;
        this->desc = desc;
        this->price = price;
        this->cover = cover;
        this->id = id;
        this->curp = curp;
        this->age = age;
    };

    //Setters
    void setName(string name){
        this->name = name;
    };
    void setDesc(string desc){
        this->desc = desc;
    };
    void setPrice(int price){
        this->price = price;
    };
    void setCover(int cover){
        this->cover = cover;
    };
    void setId(int id){
        this->id= id;
    };
    void setCurp(string curp){
        this->curp= curp;
    };
    void setAge(int age){
        this->age= age;
    };

    //Getters
    string getName(){
        return this->name;
    };
    string getDesc(){
        return this->desc;
    };
    int getPrice(){
        return this->price;
    };
    int getCover(){
        return this->cover;
    };
    int getId(){
        return this->id;
    };
    string getCurp(){
        return this->curp;
    };
    int getAge(){
        return this->age;
    };
private:
    string name;
    string desc;
    int price;
    int cover;
    int id;
    string curp;
    int age;

    };

class carroseguro : public seguro{
public:
    carroseguro(string name, string desc, int price, int cover, int id, string curp, int age) : seguro(name, desc, price, cover, id, curp, age){
        this->model = name;
        this->brand = desc;
    };

    //Setters
    void setModel(string model){
        this->model = model;
    };
    void setBrand(string brand){
        this->brand = brand;
    };
    //Getters
    string getModel(){
        return this->model;
    };
    string getBrand(){
        return this->brand;
    };

private:
    string model;
    string brand;
};

class vidaseguro : public seguro{
public:
    vidaseguro(bool sickness, string name, string desc, int price, int cover, int id, string curp, int age) : seguro(name, desc, price, cover, id, curp, age){
    }
};

void crearcarro(){

    carroseguro Carro("1", "1", 1, 1, 1, "1", 1);
    string model;
    string brand;
    int price;
    int cover;
    int id;
    string curp;
    int age;

    cout << endl << "Modelo: ";
    cin >> model;
    cout << "Marca: ";
    cin >> brand;
    cout << "Precio: ";
    cin >> price;
    cout << "Covertura: ";
    cin >> cover;
    cout << "Id: ";
    cin >> id;
    cout << "Curp: ";
    cin >> curp;
    cout << "Edad: ";
    cin >> age;

    Carro.setModel(model);
    Carro.setBrand(brand);
    Carro.setPrice(price);
    Carro.setCover(cover);
    Carro.setId(id);
    Carro.setCurp(curp);
    Carro.setAge(age);
    cout << endl << "POLIZA CREADA" << endl;


}

int settipo(){

    int valor;
    cout << "Seguro de Carro / 1" << endl << "Seguro de Vida  / 2" << endl;
    cout << "r= ";
    cin >> valor;

    switch(valor){
        case 1:{
            seguro Juan();
            cout << endl << "RELLENA LOS DATOS PARA TU POLIZA DE CARRO" << endl;
            crearcarro();
            break;
        }
        case 2:{
            cout << endl << "ELIGUE EL TIPO DE POLIZA" << endl;
            break;
        }
        default:{
            cout << "Eligue un numero valido" << endl << endl << settipo() << endl;
        }
    }
}

int setmodo(){
    int valor;
    cout << "POLIZAS EN LINEA" << endl << endl;
    cout << "Mis polizas  / 1" << endl << "Crear poliza / 2" << endl;
    cout << "r= ";
    cin >> valor;

    switch(valor){
        case 1:{
            cout << endl << "MIS POLIZAS" << endl;
            break;
        }
        case 2:{
            cout << endl << "ELIGUE EL TIPO DE POLIZA" << endl;
            settipo();
            break;
        }
        default:{
            cout << "Eligue un numero valido" << endl << endl << setmodo() << endl;
        }
    }
}

#endif


int main(){
    setmodo();
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