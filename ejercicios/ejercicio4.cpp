#include <iostream>
using namespace std;

bool palindromito(long long n) {
    long long reverse = 0;
    long long temp = n; 
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }

    return (reverse == n);
}

int main() {
    long long palindromo = 0;

    for (long i = 100; i <= 999; i++) {
        for (long j = 100; j <= 999; j++) {
            long long producto = i * j;
            if (palindromito(producto) && producto > palindromo) {
                palindromo = producto;
            }
        }
    }

    cout << palindromo << " es el palindromo mas grande del producto de 3 digitos" << endl;  
}
