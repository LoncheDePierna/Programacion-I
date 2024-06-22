cmake_minimum_required(VERSION 3.24)
project(Examen_P3_2do)

set(CMAKE_CXX_STANDARD 17)

add_executable(Examen_P3_2do
        main.cpp
        Item.cpp
        Item.h
        Inventario.cpp
        Inventario.h
        Personaje.cpp
        Personaje.h
        Entidad.cpp
        Entidad.h
        Enemigo.cpp
        Enemigo.h
        Jugador.cpp
        Jugador.h
        Habilidad.h
        Habilidad.cpp
        BolaDeFuego.h
        BolaDeFuego.cpp
        Curar.cpp
        Curar.h)