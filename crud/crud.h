#ifndef CRUD_H
#define CRUD_H

#include <vector>
#include <stdexcept>

template <typename T>
class CRUD {
private:
    std::vector<T>& db; // Referencia al vector externo como base de datos

public:
    explicit CRUD(std::vector<T>& database) : db(database) {}

    bool crear(const T& item) {
        db.push_back(item);
        return true;
    }

    T leer(size_t id) const {
        if (id < db.size()) {
            return db[id]; // Devuelve el objeto directamente
        } else {
            throw std::out_of_range("ID no válido"); // Lanza una excepción si el ID es inválido
        }
    }

    bool actualizar(size_t id, const T& nuevoItem) {
        if (id < db.size()) {
            db[id] = nuevoItem; // Actualiza el objeto en la posición indicada
            return true;
        }
        return false; // Devuelve false si el ID no es válido
    }

    bool borrar(size_t id) {
        if (id < db.size()) {
            db.erase(db.begin() + id); // Borra el objeto en la posición indicada
            return true;
        }
        return false; // Devuelve false si el ID no es válido
    }

    std::vector<T> listar() const {
        return db; // Devuelve una copia del vector completo
    }
};

#endif // CRUD_H
