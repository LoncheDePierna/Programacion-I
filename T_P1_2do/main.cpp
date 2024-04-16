
#include "Automovil.h"

int main() {

    Automovil c1{};
    Automovil c2("Ford", "Tilin", "Fiesta", 2019, 121.53);
    Automovil c3;

    c2 = c3;

    c1.Imprimir();
    c2.Imprimir();
    c3.Imprimir();

    return 0;
}