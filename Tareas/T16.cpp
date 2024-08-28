//Escribir un programa que pida al usuario inresar 2 numeros luego imprime la suma, producto, diferencia y diviison 
#include <iostream>
using namespace std;

int main()
{
    long a, b;
    cout << "Ingresa un número: ";
    cin >> a;
    cout << "Ingresa un número: ";
    cin >> b;
    
    long suma = a + b;
    long resta = a - b;
    long multiplicación = a * b;
    long división = a / b;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicación << endl;
    cout << "La division es: " << división << endl;
}