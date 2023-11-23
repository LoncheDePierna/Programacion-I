#include <iostream>


int main(){

    int a[] = {1,6,4,5,6};
    int* ptr = a;

    for( int i = 0 ; i < 5; i++){
        std::cout << *ptr;
        ptr++;
    }

};


