//
// Created by pinchiguillo on 26/11/2024.
//

#include "Worker.h"

#include <iostream>

// Constructor básico
Worker::Worker(WorkerType workerType)
    : type(workerType), currentTask(nullptr), specific_task(false) {}

// Constructor con propiedad specific_task
Worker::Worker(WorkerType workerType, bool onlySpecificTask)
    : type(workerType), currentTask(nullptr), specific_task(onlySpecificTask) {}

// Obtener el tipo del trabajador
WorkerType Worker::getType() const {
    return type;
}

// Obtener el estado del trabajador (activo si tiene una tarea asignada)
bool Worker::getState() const {
    return currentTask != nullptr;
}

// Asignar una tarea al trabajador
void Worker::assignTask(const std::shared_ptr<Task>& task) {
    if (!task) {
        std::cerr << "Error: Task cannot be null." << std::endl;
        return;
    }

    if (specific_task) {
        // Lógica adicional para manejar tareas específicas en el futuro
        std::cout << "Worker only accepts specific tasks. Assigning task: " << task << std::endl;
    }

    currentTask = task;
    std::cout << "Task assigned: " << task << std::endl;
}

// Actualizar el estado del trabajador (implementación futura)
void Worker::Update() {
    // Este método se implementará en el futuro según los requisitos.
}

// Mostrar información del trabajador
void Worker::displayWorkerInfo() const {
    std::cout << "Worker Type: ";
    switch (type) {
        case WorkerType::Engineer: std::cout << "Engineer"; break;
        case WorkerType::Manager: std::cout << "Manager"; break;
        case WorkerType::Technician: std::cout << "Technician"; break;
    }
    std::cout << std::endl;

    std::cout << "State: " << (getState() ? "Active" : "Inactive") << std::endl;

    std::cout << "Specific Task Only: " << (specific_task ? "Yes" : "No") << std::endl;

    if (currentTask) {
        std::cout << "Current Task: " << currentTask << std::endl;
    } else {
        std::cout << "No current task assigned." << std::endl;
    }
}
