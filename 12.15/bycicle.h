#include "baseCF.h"
#include <iostream>
#include <string>
using namespace std;

class Bycicle : public baseCF{
    public:
    Bycicle(int, int);

    float getCarbonFP() const override;

    string getInfo() const override;

    void setUso(int);

    void setCosto(int);

    float getCosto();

    int getUso();

    ~Bycicle();
    private:
    int costoManufactura{100};
    int usoAnual{140};
};


Bycicle::Bycicle(int cm, int uso) : costoManufactura(cm), usoAnual(uso) {
    cout << "\nConstructor de bycicle llamado\n";
}

float Bycicle::getCarbonFP() const {
    return costoManufactura + (usoAnual * 1.2f);

};

string Bycicle::getInfo() const {
        return "Bicycle - Costo de manufactura: " + to_string(costoManufactura) +
               ", Uso anual en días: " + to_string(usoAnual) + " CarbonFP es " 
               + to_string(this->getCarbonFP());}


void Bycicle::setUso(int dias ){
    usoAnual=dias;
}

void Bycicle::setCosto(int costo){
    costoManufactura = costo;
};

float Bycicle::getCosto() {
    return costoManufactura;
};

int Bycicle::getUso(){
        return (usoAnual*100)/365;
};

Bycicle::~Bycicle(){
    cout << "\nDestructor de bycicle llamado\n";
}