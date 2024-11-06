
#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;
 // test

int main() {

   cout << fixed << setprecision( 2 );

   vector< Employee* > employees{
      new SalariedEmployee(
         "Alberto", "Smith", "111-11-1111", 5, 1, 1990, 800 ),
      new CommissionEmployee(
         "Indiana", "Jones", "333-33-3333", 2, 29, 2000, 10000, .06 ),
      new BasePlusCommissionEmployee(
         "Hamilton", "Lewis", "444-44-4444", 12, 31, 1999, 5000, .04, 300 ) };

   for ( Employee* employeePtr : employees ) {

      cout << employeePtr->toString() << "\n Birthday date is  " << employeePtr->getBirthDate()<< endl;
      BasePlusCommissionEmployee* derivedPtr{
         dynamic_cast< BasePlusCommissionEmployee* >( employeePtr ) };

      if ( employeePtr )
cout << "earned $" << employeePtr->earnings() +
         ( employeePtr->getBirthDate().getMonth() == 5 ? 100.0 : 0.0 );

if (employeePtr->getBirthDate().getMonth() == 5) {
    cout << " \nIt's employee's month of birth \n";
} else {
    cout << "\nIt is not the employee's month of birth\n ";
}

}}
