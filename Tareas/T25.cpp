//Solicita 3 datos enteros y verifica si el primero factor de los otros 2.
//Utilzar modulo lesgoo %
#include <iostream>
using namespace std;

int main()
{
    long ap;
    cout << "Ingrese el 1 numero: " << endl;
    cin >> ap;
    long bp;
    cout << "Ingrese el 2 numero" << endl;
    cin >> bp;
    long  cp;
    cout << "Ingrese el 3 numero" << endl;
    cin >> cp;
    long Verificador = ap % cp;
    long Verificador2 = bp % cp;
    
    if (Verificador == 0 && Verificador2 == 0)
    {
        cout << "Los primeros 2 son factores del tercero";
    }
    else
    {
        cout << "No son :v";
    }
    return 0;

}