//suma de multiplos menores de 3 y 5 menores de 1000000
#include <iostream>
using namespace std;
int main(){
    int numero{1000000};
    int aumentado{1};
    int suma{0};
 
    while (numero > aumentado){
           int ver3;
            ver3 = (aumentado % 3);
            int ver5;
            ver5= (aumentado % 5);
        if ((ver3 == 0) || (ver5 == 0)){
            suma = suma + aumentado;
        }
        aumentado = aumentado + 1;
    }
    cout << "la suma de los numeros del 1 hasta el " << numero << " es " << suma<< endl;
}