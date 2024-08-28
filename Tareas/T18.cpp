//Escribe un programa que pida al programa que pida al usuario 2 numeros enteros luego imprima el mayor seguido de: "es el mayor". si los numeros son iguales mostrar "los numeros son iguales"
#include <iostream>
using namespace std;

int main(){
    
    long a;
    long b;
    cout << "Ingresa un número: ";
    cin >> a;
    cout << "Ingresa un número: ";
    cin >> b;

    if(a > b){
        cout << a << " es el mayor" << endl; 
    }
    else if(a < b){
        cout << b << " es el mayor" << endl;
    }
    else{
        cout << "Los numeros son iguales" << endl;
    }
}
