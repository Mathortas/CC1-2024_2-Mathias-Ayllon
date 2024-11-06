#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const std::string& sName, const std::string& sAddress, const std::string& sCity,
                             const std::string& sState, unsigned sZip, 
                             const std::string& rName, const std::string& rAddress, 
                             const std::string& rCity, const std::string& rState, 
                             unsigned rZip, double weight, double costPerOunce, double flatFee)
    : Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, weight, costPerOunce), flatFee(flatFee) {}

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + flatFee;
}
