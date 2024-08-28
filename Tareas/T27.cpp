// Dame los caracteres ASCII de ciertos datos ingresados
// Static cast cm dijo el profesor :v
#include <iostream>
using namespace std;

int main() 
{
   char dato;
   cout << "Caracter o datoaracter :";
   cin >> dato;

   cout << "Su ASCII correspondiente es: " << static_cast< int >( dato ) << endl;

   return 0;
}