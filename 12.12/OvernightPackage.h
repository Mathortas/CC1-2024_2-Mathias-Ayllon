#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
public:
    OvernightPackage(const std::string& senderName, const std::string& senderAddress, const std::string& senderCity,
                     const std::string& senderState, unsigned senderZip, 
                     const std::string& recipientName, const std::string& recipientAddress, 
                     const std::string& recipientCity, const std::string& recipientState, 
                     unsigned recipientZip, double weight, double costPerOunce, double extraFeePerOunce);

    double calculateCost() const override;

private:
    double extraFeePerOunce;
};

#endif
