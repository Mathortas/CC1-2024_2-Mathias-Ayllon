#include "Array.h"
#include <iostream>

int main() {
    // Crear dos arreglos
    Array arr1(5); // Tamaño 5
    Array arr2(arr1); // Constructor copia

    // Asignar valores a arr1
    std::cout << "Introduce 5 valores para arr1: ";
    std::cin >> arr1;

    // Mostrar arr1
    std::cout << "Contenido de arr1: " << arr1 << std::endl;

    // Probar el operador de asignación
    arr2 = arr1;
    std::cout << "Contenido de arr2 despues de asignar arr1: " << arr2 << std::endl;

    // Probar el operador de igualdad
    std::cout << "¿arr1 y arr2 son iguales? " << (arr1 == arr2 ? "Si" : "No") << std::endl;

    // Modificar un valor usando el operador []
    arr2[2] = 42;
    std::cout << "Contenido de arr2 despues de modificar: " << arr2 << std::endl;

    // Probar el operador de desigualdad
    std::cout << "¿arr1 y arr2 son diferentes? " << (arr1 != arr2 ? "Si" : "No") << std::endl;

    //Dar un valor random

    std::cout << "Ahora mostrando un valor de arr1 = " << arr1[3] << std::endl;

    return 0;
}