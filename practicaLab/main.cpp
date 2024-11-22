#include "Point.h"
#include "PointArray.h"
#include <iostream>
using namespace std;

int main() {
    Point a(2, 4);
    Point b(4, 5);
    Point c(10, 2);

    PointArray puntos;

    puntos[0] = a;
    puntos[1] = b;
    puntos[2] = c;

    // Asignar el valor de b a la posición 3
    puntos[3] = b; 

    // Verificar si puntos[1] y puntos[3] son iguales
    if (puntos[1] == puntos[3]) {
        cout << "Ya esta, son iguales ;vvv" << endl;
    } else {
        cout << "No son iguales." << endl;
    }

    // Imprimir los puntos para verificar visualmente si son iguales
    cout << "Puntos: " << puntos << endl;

    return 0;
}
