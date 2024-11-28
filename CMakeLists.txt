cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Examen_Parcial_3
    main.cpp
        Clases/Task.cpp
        Clases/Task.h
        Clases/Worker.cpp
        Clases/Worker.h
        Simulation.cpp
        Simulation.h
        Clases/WorkerType.h
)
