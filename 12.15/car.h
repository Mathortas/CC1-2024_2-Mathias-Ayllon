#include "baseCF.h"
#include <string>
#include <iostream>
using namespace std;

class Car : public baseCF{
    private:
    string nombre;
    string gasolina;
    int uso_diario{4};
    int consumoGas{1200};
    int mantenimientopA{3};
    public:

    Car(string,string,int,int,int);
    ~Car();

    int getUso();
    void setUso(int);
    int getConsumo();
    void setConsumo(int);
    int getMantenimiento();
    void realizarMantenimiento(int);
    float getCarbonFP()const override;
    string getInfo() const override;
};


/* TipoFuncion(Void,int,float)-
   NombreClase::MetododeClase(valores){
   Calculos,cambios,añadir,etc
   }
*/

Car::Car(string name, string _gaso, int ud, int cons, int mant)
        : nombre(name), gasolina(_gaso), uso_diario(ud), consumoGas(cons), mantenimientopA(mant) {
            cout << "\nConstructor de car llamado\n";
        }

Car::~Car(){
    cout << "\nDestructor de car llamado \n";
};

int Car::getUso(){
    return uso_diario;
}

void Car::setUso(int uso){
    uso_diario = uso;
}

int Car::getConsumo(){
    return consumoGas;
}

void Car::setConsumo(int consumo){
    consumoGas = consumo;
}
int Car::getMantenimiento(){
    return mantenimientopA;
}

void Car::realizarMantenimiento(int manten){
    mantenimientopA = mantenimientopA + manten;
}

float Car::getCarbonFP() const {
    return ((consumoGas/365) + (uso_diario*52) )/ mantenimientopA;
}

string Car::getInfo() const {
    return "El carro es " + nombre + " utiliza la gasolina " + gasolina + 
    " se usa " + to_string(uso_diario) + " horas, al año consume " 
    + to_string(consumoGas) + " gasolina " + to_string(this->getCarbonFP());

}
