#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream lectura("archivolectura.txt");
    ofstream escritura("archivoescritura.txt");
    int x{100};
    lectura >> x;
    lectura.close();
    escritura << x;
    escritura.close();

    string oracion;
    getline(cin, oracion);
    
}