cmake_minimum_required(VERSION 3.29)
project(Ane)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ane
        actor/Actor.cpp
        main.cpp
        actor/Actor.h
        Tarea/Tarea.cpp
        Tarea/Tarea.h
        launcher.cpp
        launcher.h
        launcher.h
        crud/crud.cpp
        crud/crud.h
)
