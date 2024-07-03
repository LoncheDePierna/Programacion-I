v#include <iostream>
#include <vector>

struct Armadillo{
    int a;
    float b;
    bool c;
    char d;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    int i = 5;
    int &refi = i;

    std::cout << refi << std::endl;
    std::cout << &refi << std::endl;
    std::cout << i << std::endl;
    std::cout << &i << std::endl << std::endl;

    //Formas de Crear vectores
    std::vector<int> v1 (5, 25);
    std::vector<int> v2 = {1,2,3,4,5,6};
    int a[]= {1,2,3,4,5};
    std::vector<int> v3 = v2;

    /*
    int *p1 = new int[11];
    int *p2 = p1;
    *p1 = 25;
    std::cout << *p2;
    */
//Ejercicio
    int *p1 = new int[10];
    int *p2 = p1;

    int *p3 = new int[12];
    int *p4 = p3;

    *p1 = 10;
    std::cout << *p1 << std::endl;
    *p2 = 20;
    std::cout << *p1 << std::endl;

    *p3 = 30;
    std::cout << *p3 << std::endl;
    *p4 = 40;
    std::cout << *p3 << std::endl;
    delete p4;
    std::cout << *p3 << std::endl;

    void *topo = malloc(500);
    void *topito = (void*) calloc (5, 500);

    std::cout << std::endl << _msize(topo) << std::endl;
    std::cout << _msize(topito) << std::endl;

    topito = realloc(topito, 10 * 200);
    std::cout << _msize(topito) << std::endl;

    free(topo);
    free(topito);
//Ejercicio 1 Alocar memoria
    int *tilin = (int*) malloc (sizeof(int));
    *tilin = 4;
    std::cout << *tilin << std::endl;
    free(tilin);
//Ejercicio 2 Alocar Arreglo de Memoria
    int *eteZech = (int*) calloc (20, sizeof(int));

    for (int i = 0; i < 20; i++){
        *(eteZech + i) = 4;
        std::cout << *(eteZech + i) << std::endl;
    }

    std::cout << "jaja " << eteZech[14] << std::endl;

//Ejercicio 3 Cambiar tamaño de Arreglo de Memoria


    int *temp = (int*) realloc(eteZech, 2 * _msize(eteZech));
    eteZech = temp;
    std::cout << _msize(eteZech) << std::endl;

    for (int i = 20; i < 40; i++){
        *(eteZech + i) = 4;
    }

    std::cout << "jeje " << eteZech[37] << std::endl;

    delete temp;
    free(eteZech);

//Ejercicio 4 New y Delete
    int *Pepe = new int;
    *Pepe = 20;
    std::cout << *Pepe << std::endl;
    delete Pepe;

//Ejercicio 5 Arreglo New y Delete
    int *Alga = new int[10];
    for (int i = 0; i < 10; i++){
        Alga[i] = 3 + i;
        std::cout << Alga[i] << std::endl;
    }
    delete Alga;

//Ejercicio 6 crear una estructura que tenga 4 datos de diferentes tipos de datos.
//crear una estructura utilizando new y una estructura utilizando malloc.

    Armadillo Maya = {12,12.1,false,59};
    Armadillo *ZAZA = (Armadillo*) malloc (sizeof(Armadillo));
    *ZAZA = {24,12.3,true,67};

    std::cout << ZAZA->a << ZAZA->b << ZAZA->c << ZAZA->d << std::endl;
return 0;

}

