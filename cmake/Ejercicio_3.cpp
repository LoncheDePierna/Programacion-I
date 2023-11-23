#include <iostream>

void modvalores(int * ptr){
    *ptr = 21;
}

int main(){

    int a = 8;

    modvalores(&a);

    std::cout << a;

}
