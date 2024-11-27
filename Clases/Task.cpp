//
// Created by pinchiguillo on 26/11/2024.
//

#include "Task.h"

#include "task.h"
#include <iostream>

// Constructor
Task::Task(const std::string& taskName, int taskDuration)
    : name(taskName), duration(taskDuration), remaining_time(taskDuration), assigned_worker(nullptr) {
    if (taskDuration <= 0) {
        std::cerr << "Error: Task duration must be greater than 0." << std::endl;
        duration = 1;
        remaining_time = 1;
    }
}

// Obtener el trabajador asignado
Worker* Task::getWorker() const {
    return assigned_worker;
}

// Configurar el trabajador asignado
void Task::setWorker(Worker* worker) {
    assigned_worker = worker;
}

// Actualizar el tiempo restante de la tarea
void Task::Update() {
    if (remaining_time > 0) {
        remaining_time--; // Reducir el tiempo restante
    }
}

// Verificar si la tarea está completa
bool Task::isCompleted() const {
    return remaining_time <= 0;
}

// Obtener el nombre de la tarea
std::string Task::getName() const {
    return name;
}

// Obtener la duración total de la tarea
int Task::getDuration() const {
    return duration;
}

// Obtener el tiempo restante de la tarea
int Task::getRemainingTime() const {
    return remaining_time;
}
