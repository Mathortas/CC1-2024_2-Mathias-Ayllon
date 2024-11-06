#include <sstream>
#include "Package.h"

using namespace std;

Package::Package(const std::string& sName, const std::string& sAddress, const std::string& sCity,
                 const std::string& sState, unsigned sZip, 
                 const std::string& rName, const std::string& rAddress, 
                 const std::string& rCity, const std::string& rState, 
                 unsigned rZip, double W, double C)
    : senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZip(sZip),
      recipientName(rName), recipientAddress(rAddress), recipientCity(rCity), recipientState(rState), recipientZip(rZip),
      weight(W > 0.0 ? W : throw "Incorrect weight"),
      costPerOunce(C > 0.0 ? C : throw "Incorrect cost") {}

double Package::getWeight() const { return weight; }
double Package::getCostPerOunce() const { return costPerOunce; }

double Package::calculateCost() const {
    return weight * costPerOunce;
}

string Package::getLabels() const {
    ostringstream output;
    output << "FROM: " << senderName << '\n' << senderAddress << ", "
           << senderCity << ", " << senderState << ", " << senderZip << "\nTO: "
           << recipientName << '\n' << recipientAddress << ", " << recipientCity
           << ", " << recipientState << ", " << recipientZip << endl;
    return output.str();
}
