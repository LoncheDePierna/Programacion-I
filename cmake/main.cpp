//
// Created by Alumnos on 23/11/2023.
//
#ifndef PROYECTOS_INSURANCES_H
#define PROYECTOS_INSURANCES_H

#include <string>
#include <iostream>
using namespace std;

class Insurances {
public:
    Insurances(){};
    Insurances(string name, string description, int price, int coverage, int id, string curp, string birthDate){
        this->name = name;
        this->description = description;
        this->price = price;
        this->coverage = coverage;
        this->id = id;
        this->curp = curp;
        this->birthDate = birthDate;
    };

    //Setters
    void setName(string name){
        this->name = name;
    };
    void setDescription(string description){
        this->description = description ;
    };
    void setPrice(int price){
        this->price = price;
    };
    void setCoverage(int coverage){
        this->coverage = coverage;
    };
    void setId(int id){
        this->id= id;
    };
    void setCurp(string curp){
        this->curp= curp;
    };
    void setBirthDate(string birthDate){
        this->birthDate= birthDate;
    };

    //Getters
    string getName(){
        return this->name;
    };
    string getDescription(){
        return this->description;
    };
    int getPrice(){
        return this->price;
    };
    int getCoverage(){
        return this->coverage;
    };
    int getId(){
        return this->id;
    };
    string getCurp(){
        return this->curp;
    };
    string getBirthDate(){
        return this->birthDate;
    };
private:
    string name;
    string description;
    int price;
    int coverage;
    int id;
    string curp;
    string birthDate;

    };

class CarInsurances {
public:
    CarInsurances(){};
    CarInsurances(string model, string brand, string name, string description, int price, int coverage, int id, string curp, string birthDate) : Insurances(name, description, price, coverage, id, curp, birthDate ){
        this->model = name;
        this->brand = description;
    };

    //Setters
    void setModel(string model){
        this->model = model;
    };
    void setBrand(string brand){
        this->brand = brand;
    };

private:
    string model;
    string brand;
};

class LifeInsurances {
public:
    LifeInsurances(){};
    LifeInsurances(bool sickness, string name, string description, int price, int coverage, int id, string curp, string birthDate) : Insurances(name, description, price, coverage, id, curp, birthDate ){
};

#endif

int main(){

    cout << "POLIZAS EN LINEA" << endl << endl;
    cout << "Mis polizas  / 1" << endl << "Crear poliza / 2" << endl;
    cout << "r= " << endl;



}

//Póliza de Vida:

//Información personal:
// Nombre , dirección , edad (fecha de nacimiento), género, estado civil, ocupación.

//Monto de cobertura:
// Dinero que desea para sus beneficiarios en caso de muerte.

//Beneficiarios:
// Nombre y detalles de contacto.

//Historial médico y financiero:
// historial médico (incluyendo enfermedades preexistentes, y detalles financieros, como ingresos y deudas.)