#ifndef EURO_H
#define EURO_H
#include <iostream>
using namespace std;

class Euro{
    private:
    int Mon{0}, Cen{0};
    public:

    Euro(unsigned int mon, unsigned int cen) : Mon{mon}, Cen{cen} {
        cout<< "Constructor de euros y centimos inicializado " << endl;
    }
    Euro(unsigned int mon) : Mon{mon}{
        cout << "Constructor de solo euros inicializado" << endl;
    }
    void getEuro() const {
        cout <<"Eur " << Mon << "." << Cen<< endl;
        }
    int getMon() const{
        return Mon;
    }
    int getCen() const{
        return Cen;
    }
    friend Euro operator+(const Euro& e1, const Euro& e2){
        
        if (e1.Cen + e2.Cen < 99)
        return Euro((e1.Mon + e2.Mon) , (e1.Cen + e2.Cen));
        else{
            int tmp = (e1.Cen + e2.Cen) % 100;
            return Euro((e1.Mon + e2.Mon + 1) , tmp); 
        }
    };
    friend Euro operator-(const Euro& e1, const Euro& e2){
        if (e2.Mon > e1.Mon){
            cout << "No se puede dar valores negativos restando" << endl;    
        }
        else if (e2.Cen > e1.Cen)
        {
            return Euro ((e1.Mon-e2.Mon-1) , ((e1.Cen+100) - e2.Cen));
        }
        return Euro((e1.Mon-e2.Mon) , (e1.Cen-e2.Cen));
    };
};

#endif