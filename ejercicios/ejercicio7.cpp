#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;  
    if (num % 2 == 0) return false;  

    for (int i = 2; i < num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

long NumerodePrimo() {
    long long contador = 0;
    for (long i = 2; true; i++) { 
        if (esPrimo(i)) {
            contador++;
        }
        if (contador == 10001) {
            return i; 
        }
    }
}

int main() {
    cout << NumerodePrimo() << " es el numero primo 10001" << endl;
    return 0;
}
