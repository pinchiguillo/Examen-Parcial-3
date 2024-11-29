#include <iostream>
#include <vector>
#include <memory>
#include "crud/crud.h"
#include "Clases/Task.h"
#include "Clases/Worker.h"
#include "Clases/WorkerType.h"

int main() {
    // Crear base de datos externa
    std::vector<std::shared_ptr<Task>> taskDB;
    std::vector<std::shared_ptr<Worker>> workerDB;

    // Instanciar CRUD
    CRUD<std::shared_ptr<Task>> taskCRUD(taskDB);
    CRUD<std::shared_ptr<Worker>> workerCRUD(workerDB);

    // Crear tareas
    auto task1 = std::make_shared<Task>("Planificación", 5, WorkerType::CEO);
    auto task2 = std::make_shared<Task>("Marketing", 3, WorkerType::AGENCY);
    taskCRUD.crear(task1);
    taskCRUD.crear(task2);

    // Crear trabajadores
    auto worker1 = std::make_shared<Worker>(WorkerType::CEO);
    auto worker2 = std::make_shared<Worker>(WorkerType::AGENCY);
    workerCRUD.crear(worker1);
    workerCRUD.crear(worker2);

    // Listar tareas
    auto tasks = taskCRUD.listar();
    std::cout << "\n=== Lista de Tareas ===\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i << ": " << tasks[i].get() << "\n"; // Imprime la dirección de memoria
    }

    // Listar trabajadores
    auto workers = workerCRUD.listar();
    std::cout << "\n=== Lista de Trabajadores ===\n";
    for (size_t i = 0; i < workers.size(); ++i) {
        std::cout << i << ": " << workers[i].get() << "\n"; // Imprime la dirección de memoria
    }

    return 0;
}
