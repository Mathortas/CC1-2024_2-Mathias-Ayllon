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

void primoMayorfactor(int n) {
    long long primomayorfactor{0};
    for (int i = 3; i < n; i= i+2) {
        if (esPrimo(i) && (n%i == 0)) {
            primomayorfactor = i;
        } 
       
        }
     cout << "el numero primo mas grande factor de " << n << " es " << primomayorfactor << endl;
    }


int main() {    
    int n;
    cout << "Introduce un número: ";
    cin >> n;

    primoMayorfactor(n);

    return 0;
}