
#include "Automovil.h"
#include <iostream>
#include "Float.h"
#include <string>

int main() {

    int a,b,c,d,e,f;

    std::cout << &a << " " << &b << " " << &c << " " << std::endl;

    Automovil c1{};
    Automovil c2("Ford", "Tilin", "Fiesta", 2019, 121.53);
    Automovil c3;

    c2 = c3;

    c1.Imprimir();
    c2.Imprimir();
    c3.Imprimir();

    FloatCell d1{};
    FloatCell d2(17);





    return 0;
}