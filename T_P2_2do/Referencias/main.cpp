#include <iostream>
#include <vector>

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

return 0;




}
