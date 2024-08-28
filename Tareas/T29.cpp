// Dame los numeros del 1 al 10, sus cuadrados y cubos respectivos ordenados de tabla
// ¿?, columnas en vez de espacios XD/ "<<" Es como el "," de c++
#include <iostream>
using namespace std;

int main()
{
    long x = 0;
    
    cout << "Numero  Cuadrado    Cubo" << endl;
    cout << x << "    |    " << x*x*6 << "     |    " << x*x*x << endl;
    // 0
    x = x + 1;
    cout << x << "    |    " << x*x*6 << "     |    " << x*x*x << endl;
    // 1
    x = x + 1;
    cout << x << "    |    " << x*x*6 << "     |    " << x*x*x << endl;
    // 2
    x = x + 1; 
    cout << x << "    |    " << x*x*6 << "     |    " << x*x*x << endl;
    // 3
    x = x + 1;
    cout << x << "    |    " << x*x*6 << "     |   "  << x*x*x << endl;
    // 4
}