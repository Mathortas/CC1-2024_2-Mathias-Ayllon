//Escribe un programa que pida al usuario 3 numeros, luego imprime la suma, el promedio, el producto, el mayor y el menor
#include <iostream>
using namespace std;

int main()
{
    long a, b, c;
    cout << "Ingresa 3 números: ";
    cin >> a >> b >> c;
    
    long suma = a + b + c;
    cout << "La suma es " << suma << endl;
    long promedio = (a + b + c)/3;
    cout << "El promedio es: " << promedio << endl;
    long producto = a * b * c;
    cout << "El producto es: " << producto << endl;

    if(a < b && b < c){
        cout << c << " es el mayor" << endl;
        cout << a << " es el menor" << endl;

    }
    else if(c < b && b < a){
        cout << a << " es el mayor" << endl;
        cout << c << " es el menor" << endl;

    }
    else if(b < a && a < c){
        cout << b << " es el menor" << endl;
        cout << c << " es el mayor" << endl;
    }
    else{
        cout << "Los numeros son iguales" << endl;
    }
}