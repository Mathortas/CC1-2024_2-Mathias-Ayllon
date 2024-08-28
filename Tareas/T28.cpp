// Descompon un numero de 4 digitos, dame cada uno de ellos al reves y separados por espacios
// Skipearse el endl segun internet para que queden en fila y no como columna 
#include <iostream>
using namespace std;

int main() 
{

   long Numero;

   cout << "Numero de 4 digitos: ";
   cin >> Numero;

   cout << Numero % 10 << "  "
        << Numero % 100 / 10 << "  "
        << Numero % 1000 / 100 << "  "
        << Numero / 1000 << endl;

   return 0;
}