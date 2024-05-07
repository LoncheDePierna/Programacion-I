cmake_minimum_required(VERSION 3.24.1)
project(Proyectos_IPV_AAST)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyectos_IPV_ASST
        ../T_P2_2do/Polimorfismo/Animal.cpp
        ../T_P2_2do/Polimorfismo/Animal.h
        ../T_P2_2do/Polimorfismo/Dog.cpp
        ../T_P2_2do/Polimorfismo/Dog.h
        ../T_P2_2do/Polimorfismo/Capybara.h
        ../T_P2_2do/Polimorfismo/Capybara.cpp
        ../T_P2_2do/Polimorfismo/Avestruz.h
        ../T_P2_2do/Polimorfismo/Avestruz.cpp

        ../T_P2_2do/Polimorfismo/mainAnimal.cpp
        ../T_P2_2do/Polimorfismo/Canguro.cpp
        ../T_P2_2do/Polimorfismo/Pajaro.cpp
        ../T_P2_2do/Polimorfismo/Gallina.cpp
        ../T_P2_2do/Polimorfismo/Pinguino.cpp
        ../T_P2_2do/Escritura/main.cpp)