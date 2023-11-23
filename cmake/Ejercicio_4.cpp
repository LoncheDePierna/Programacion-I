//
// Created by Alumnos on 23/11/2023.
//


#include <iostream>

int main(){

    const char* message = "Hello World";
    std::cout << *message;

    for(int i = 0 ; i < 11 ; i++){
        std::cout << *message;
        message++;
    }

}