#include "baseCF.h"
#include <string>
#include <iostream>
using namespace std;

class Building : public baseCF{
    private:
    string nombre{};
    int personas{15};
    int consumoEl{300};
    int horasSem{66};
    public:
    Building(string, int ,int ,int);
    ~Building();

    int getPersonas();
    void setPersonas(int);
    int getElectricidad();
    void setElectricidad(int);
    int getHoras();
    void setHoras(int);
    string getInfo() const override;
    float getCarbonFP() const override;
    
};

Building::Building(string name, int persons, int cons, int hours)
        : nombre(name), personas(persons), consumoEl(cons), horasSem(hours) {
            cout << "\nConstructor de building llamado \n";
        }

Building::~Building() {
    cout << "\nDestructor de building llamado\n" << endl;
}

int Building::getPersonas(){
    return personas;
}

void Building::setPersonas(int persons){
    personas = persons;
}

int Building::getElectricidad(){
    return consumoEl;
}

void Building::setElectricidad(int elec){
    consumoEl = elec;
}

int Building::getHoras(){
    return horasSem;
}
void Building::setHoras(int hours){
    horasSem=hours;
}

float Building::getCarbonFP() const{
    return (personas*horasSem*consumoEl)/365;
}
string Building::getInfo() const {
    return "La empresa se llama " + nombre + "/ Hay " + to_string(personas) + " en la empresa"+
    ", consumen " + to_string(consumoEl) + " en total consumen su CFP de :" + to_string(this->getCarbonFP());

}