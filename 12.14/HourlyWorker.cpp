#include "HourlyWorker.h"
using namespace std;


HourlyWorker::HourlyWorker(const string& firstName, const string& lastName, const string& ssn, double wagePerHour, 
int numHours):Employee(firstName, lastName, ssn), wage(wagePerHour), hours(numHours) {}

double HourlyWorker::earnings() const {
        if (hours > 40) {
            return (40 * wage) + ((hours - 40) * wage * 1.5);  // horas extra
        }
        return wage * hours;
    }

string HourlyWorker::toString() const {
        return Employee::toString() + "\nHourlyWorker: " + to_string(hours) + " hours at $" + to_string(wage) + " per hour";
    }

