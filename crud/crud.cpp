#include "crud.h"
#include <iostream> // Para std::cout

// Constructor
template <typename T>
CRUD<T>::CRUD(std::vector<T>& database) : db(database) {}

// Crear un nuevo elemento
template <typename T>
bool CRUD<T>::crear(const T& item) {
    db.push_back(item);
    std::cout << "Elemento creado.\n";
    return true;
}

// Leer un elemento por índice
template <typename T>
T* CRUD<T>::leer(size_t id) {
    if (id < db.size()) {
        return &db[id];
    } else {
        std::cout << "Elemento no encontrado.\n";
        return nullptr;
    }
}

// Actualizar un elemento existente
template <typename T>
bool CRUD<T>::actualizar(size_t id, const T& nuevoItem) {
    if (id < db.size()) {
        db[id] = nuevoItem;
        std::cout << "Elemento actualizado.\n";
        return true;
    } else {
        std::cout << "Elemento no encontrado para actualizar.\n";
        return false;
    }
}

// Borrar un elemento por índice
template <typename T>
bool CRUD<T>::borrar(size_t id) {
    if (id < db.size()) {
        db.erase(db.begin() + id);
        std::cout << "Elemento borrado.\n";
        return true;
    } else {
        std::cout << "Elemento no encontrado para borrar.\n";
        return false;
    }
}

// Listar todos los elementos
template <typename T>
void CRUD<T>::listar() const {
    std::cout << "Elementos en el CRUD:\n";
    for (size_t i = 0; i < db.size(); ++i) {
        std::cout << i << ": " << db[i] << "\n";
    }
}
