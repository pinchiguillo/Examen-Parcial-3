/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

#include "launcher.h"



int main() {



    return 0;
}



int mainf() {
    Tarea ta ("A", "Reserva vuelo", 20);
    Tarea td ("D", "Prepara billete", 10);
    
    std::cout<<"Hello World" << "\n";
    //cout << ta.getId() << " " << ta.getDesc() << " " << to_string(ta.getDuracion()) << "\n";
    cout << ta.toString();
    cout << td.toString();
    
    Actor agencia("AG", "Agencia viajes");
    agencia.addTarea(ta);
    agencia.addTarea(td);
    
    cout << td.toString();
    

    return 0;
}