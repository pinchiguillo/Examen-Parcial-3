//
// Created by pinchiguillo on 26/11/2024.
//

#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <memory>
#include "task.h" // Incluye la definición de la clase Task

// Enumeración para los tipos de trabajadores
enum class WorkerType {
    CEO,
    AGENCY,
    GENERIC
};

class Worker {
private:
    WorkerType type;                       // Tipo de trabajador (inmutable)
    std::shared_ptr<Task> currentTask;     // Tarea actual (puntero inteligente)
    bool specific_task;                    // Indica si el trabajador solo acepta tareas específicas

public:
    // Constructores
    Worker(WorkerType workerType);                               // Constructor básico
    Worker(WorkerType workerType, bool onlySpecificTask);        // Constructor con propiedad specific_task

    // Métodos para obtener el tipo del trabajador
    WorkerType getType() const;

    // Métodos relacionados con tareas
    bool getState() const;                 // Activo solo si tiene tarea
    void assignTask(const std::shared_ptr<Task>& task);

    // Actualizar el estado del trabajador (vacío por ahora)
    void Update();

    // Mostrar información del trabajador
    void displayWorkerInfo() const;
};




#endif //WORKER_H
