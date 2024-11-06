#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "Employee.h"
using namespace std;

class HourlyWorker:public Employee {
    private:
       double wage;      // salario por hora
       int hours;        // número de horas trabajadas
    public:
       HourlyWorker(const string&, const string&, const string&, double, int);
    
       double earnings() const override;
       string toString() const override;
};

#endif
