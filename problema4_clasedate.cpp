#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
public:
   explicit Date ( int dia, int mes , int anio) : day{dia} , month{mes}, year{anio}{
     if ((mes > 12) || ( mes < 1)){
       month  = 1;
     }
   }
   int mostrarDia() const{
     return  day;
   }
   void setDia(int dia){
    day = dia;
   }
   int mostrarMes() const{
     return month;
   }
   void setMes(int mes){
    month = mes;
   }
   int mostrarAnio() const{
     return year;
   }
   void setAnio(int anio){
    year = anio;
   }
   void darFecha(){
     cout << "Current date is " << day << " // " << month << " // " << year << endl;
   }
};

int main(){
    Date fecha(25,3,2000);
    fecha.darFecha();
    Date fecha2(12,14,2001);
    fecha2.darFecha();
}