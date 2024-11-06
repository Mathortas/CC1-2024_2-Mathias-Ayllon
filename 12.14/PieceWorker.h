#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"
using namespace std;


class PieceWorker:public Employee {
    private:
       double wage;      // salario por pieza
       int pieces;       // número de piezas producidas

    public:
       PieceWorker(const string&, const string&, const string&, double, int);

       double earnings() const override;

       string toString() const override;

};

#endif
