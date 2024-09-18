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

void imprimirPrimosMenoresA(int n) {
    for (int i = 2; i < n; ++i) {
        if (esPrimo(i)) {
            cout << i << " es primo." << endl;
        } 
        }
    }


int main() {
    int n;
    cout << "Introduce un número: ";
    cin >> n;
    
    imprimirPrimosMenoresA(n);
    
    return 0;
}
