cmake_minimum_required(VERSION 3.29)
project(Ane)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ane
        main.cpp
        launcher.cpp
        launcher.h
        launcher.h
        crud/crud.h
        Clases/Task.cpp
        Clases/Task.h
        Clases/Worker.cpp
        Clases/Worker.h
        Clases/WorkerType.h
        Clases/Task.cpp
)
