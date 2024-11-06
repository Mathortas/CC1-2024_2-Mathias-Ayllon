#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package {
public:
    TwoDayPackage(const std::string& senderName, const std::string& senderAddress, const std::string& senderCity,
                  const std::string& senderState, unsigned senderZip, 
                  const std::string& recipientName, const std::string& recipientAddress, 
                  const std::string& recipientCity, const std::string& recipientState, 
                  unsigned recipientZip, double weight, double costPerOunce, double flatFee);

    double calculateCost() const override;

private:
    double flatFee;
};

#endif
