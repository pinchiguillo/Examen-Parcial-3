//
// Created by pinchiguillo on 28/11/2024.
//

#include "Tarea.h"

#include <iostream>
#include <string>

class Tarea {       // The class
private:
    std::string id;// Access specifier
    std::string descripcion;
    int duracion;
    // Attribute (int variable)
    // Attribute (string variable)
public:           // Access specifier
    Tarea(std::string id, std::string descripcion, int duracion) {     // Constructor
        this->id= id;
        this->descripcion= descripcion;
        this->duracion= duracion;
    }

public:
    std::string getId(){
        return id;
    }
    std::string getDesc(){
        return descripcion;
    }

    int getDuracion(){
        return duracion;
    }

    std::string toString(){
        return ("Tarea: " + descripcion + " Duracion: " + std::to_string(duracion));
    }

};