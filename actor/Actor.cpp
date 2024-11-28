#include <vector>
#include <string>
#include <iostream>

#include "../Tarea/Tarea.h"

class Actor {       // The class
  private:  
    std::string id;// Access specifier
    std::string descripcion;
    std::vector<Tarea> listaTareas;
    int tiempoTotal;
    int numTareas;
  public:           // Access specifier
     Actor(std::string id, std::string descripcion) {     // Constructor
        this->id= id;
        this->descripcion= descripcion;
         this->tiempoTotal = 0;
        this->numTareas=0;
    }

     std::string getId(){
         return id;
     }
     std::string getDesc(){
         return descripcion;
     }

     int getNumTareas(){
         return numTareas;
     }
     
     int addTarea(Tarea t){
         if(this.getNumTareas()<20){
             [numTareas]=t;
              numTareas++;
         }
         return numTareas;
     }
     
      std::string toString(){
         strin resul="";
         int duracionTotal=0;
         for(int i=0; i<numTareas;i++){
             resul+="Tarea: " + to_std::string(i) + ": " + listaTareas[i].toString() + "\n"
             duracionTotal += listaTareas[i].getDuracion()
         }
         return ("Tarea: " + descripcion + " Duracion: " + to_std::string(duracion) + "duracionTotal: " + duracionTotal) ;
     }
     
};
