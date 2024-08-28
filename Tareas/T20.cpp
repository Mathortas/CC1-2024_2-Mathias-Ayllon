// Sacar diametro, circunferencia y area de un circulo con el radio que tiene que digitar
// Solo operaciones y cout :D
#include <iostream>
using namespace std;
int main()
{
    float radio;
    cout << "Ingresa el radio de tu circulo" << endl;
    cin >> radio;

    float diametro = radio * 2;
    float circunferencia = 2 * 3.14159 * radio;
    float area = 3.14159 * radio * radio;

    cout << "El diametro es " << diametro << endl;
    cout << "La circunferencia es " << circunferencia << endl;
    cout << "El area es " << area  << endl;
}