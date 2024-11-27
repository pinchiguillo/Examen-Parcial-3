//
// Created by pinchiguillo on 26/11/2024.
//

#ifndef TASK_H
#define TASK_H

#include <string>
#include "Worker.h"

class Worker; // Declaración anticipada para evitar dependencias circulares

class Task {
private:
    std::string name;          // Nombre de la tarea
    int duration;              // Duración total de la tarea
    int remaining_time;        // Tiempo restante para completar la tarea
    Worker* assigned_worker;   // Trabajador asignado a esta tarea

public:
    // Constructor
    Task(const std::string& taskName, int taskDuration);

    // Métodos para el trabajador asignado
    Worker* getWorker() const;
    void setWorker(Worker* worker);

    // Función para actualizar la tarea
    void Update();

    // Verificar si la tarea está completa
    bool isCompleted() const;

    // Obtener información sobre la tarea
    std::string getName() const;
    int getDuration() const;
    int getRemainingTime() const;
};

#endif //TASK_H
