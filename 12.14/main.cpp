#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"

using namespace std;

void virtualViaPointer(const Employee* const);
void virtualViaReference(const Employee&);

int main() {
    cout << fixed << setprecision(2); 

    SalariedEmployee salariedEmployee{
            "causa", "salariado", "111-11-1111", 600};
    CommissionEmployee commissionEmployee{
            "causita", "comisionado", "333-33-3333", 15000, .05};
    BasePlusCommissionEmployee basePlusCommissionEmployee{
            "Lebron", "James", "444-44-4444", 5500, .08, 100};
    PieceWorker pieceWorker{
            "Leo", "Messi", "555-55-5555", 5.40, 200};
    HourlyWorker hourlyWorker{
            "Alberto", "Lescano", "666-66-6666", 25.00, 80};
    
    vector<Employee *> employees{&salariedEmployee, &commissionEmployee,
        &basePlusCommissionEmployee, &pieceWorker, &hourlyWorker};

    for(const Employee* ptr : employees) {
        virtualViaPointer(ptr);
    }
    for(const Employee* ptr : employees ) {
        virtualViaReference(*ptr);
    }
}

void virtualViaPointer(const Employee* const baseClassPtr){
    cout << baseClassPtr->toString()
        << "\nearned  $ " << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee& baseClassRef) {
    cout << baseClassRef.toString()
        << "\nearned $ " << baseClassRef.earnings() << "\n\n";
}
