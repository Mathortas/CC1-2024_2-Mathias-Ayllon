// Archivo: Array.h
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Array {
    friend std::ostream& operator<<(std::ostream& os, const Array& arr);
    friend std::istream& operator>>(std::istream& is, Array& arr);

public:
    // Constructor por defecto
    Array(int size = 10) : size(size), ptr(new int[size]()) {
        std::cout<< "Constructor por defecto llamado " << std::endl;
    }

    // Constructor copia
    Array(const Array& other) : size(other.size), ptr(new int[other.size]) {
        for (size_t i = 0; i < size; ++i)
            ptr[i] = other.ptr[i];
        std::cout<< "Constructor copia llamado " << std::endl;
    }

    // Destructor
    ~Array() { 
        delete[] ptr;
        std::cout<< "Destructor llamado " << std::endl; }

    // Método para obtener el tamaño
    size_t getSize() const { return size; }

    // Operador de asignación
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] ptr; // Liberar memoria existente
            size = other.size;
            ptr = new int[size];
            for (size_t i = 0; i < size; ++i)
                ptr[i] = other.ptr[i];
        }
        return *this;
    }

    // Operador de igualdad
    bool operator==(const Array& right) const {
        if (size != right.size)
            return false;
        for (size_t i = 0; i < size; ++i) {
            if (ptr[i] != right.ptr[i])
                return false;
        }
        return true;
    }

    // Operador de desigualdad
    bool operator!=(const Array& right) const {
        return !(*this == right);
    }

    // Operador de subíndice (solo lectura)
    int operator[](int index) const {
        return ptr[index];
    }

    // Operador de subíndice (escritura)
    int& operator[](int index) {
        return ptr[index];
    }

private:
    size_t size; // Tamaño del arreglo
    int* ptr;    // Puntero al arreglo
};

// Sobrecarga del operador de salida <<
ostream& operator<<(ostream& output, const Array& a) {
    output << "[ ";
    for(size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }
    output <<"]" << endl;
    return output;
}

// Sobrecarga del operador de entrada >>
std::istream& operator>>(std::istream& is, Array& arr) {
    for (size_t i = 0; i < arr.size; ++i) {
        is >> arr.ptr[i];
    }
    return is;
}

#endif // ARRAY_H