//De 5 elementos, sacar el numero mayor y menor, USANDO SOLO LAS TECNICAS DEL CAPITULO
// No hay listas pipipipipi, asignar un mayor y un menor?
#include <iostream>
using namespace std;

int main() {
  long num1, num2, num3, num4, num5;
  long max_num, min_num;

  cout << "Ingresa 5 numeros";
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;
  cin >> num5;

  max_num = num1;
  min_num = num1;

  if (num2 > max_num) 
  {
    max_num = num2;
  } 
  else if (num2 < min_num) 
  {
    min_num = num2;
  }

  if (num3 > max_num) 
  {
    max_num = num3;
  } 
  else if (num3 < min_num) 
  {
    min_num = num3;
  }

  if (num4 > max_num) 
  {
    max_num = num4;
  } else if (num4 < min_num) 
  {
    min_num = num4;
  }

  if (num5 > max_num) 
  {
    max_num = num5;
  } 
  else if (num5 < min_num) 
  {
    min_num = num5;
  }

  cout << "El numero mayor de los 5 es: " << max_num << endl;
  cout << "El numero menor de los 5 es:" << min_num << endl;

  return 0;
}