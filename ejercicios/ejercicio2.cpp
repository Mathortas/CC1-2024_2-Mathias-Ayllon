#include <iostream>
using namespace std;

int main() {
    long long limite = 4000000;
    long long a = 1, b = 2;  
    long long suma = 0;

    
    while (b <= limite) {
        if (b % 2 == 0) {
            suma += b;
        }
        long long temp = b;
        b = a + b;
        a = temp; //Parece complicado pero temp toma el valor inicial de b, de ahi b hace lo caracteristico de fibonacci que es la suma del anterior con el actual y de ahi eso hace que a se vuelva ahora un anterior al anterior pero vuelve a ser el anterior a b asignandole temp q se usa como un checkpoint de b para cuando se sumen a+b y asi a no se quede atras.
    }

    cout << "La suma de los términos pares  que no exceden de " << limite << " es: " << suma << endl;

    return 0;
}
