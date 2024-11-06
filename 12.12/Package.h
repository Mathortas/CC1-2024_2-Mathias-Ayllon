// Exercise 12.12: Package.h
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
public:
    // Constructor que inicializa todos los atributos
    Package(const std::string& senderName, const std::string& senderAddress, const std::string& senderCity,
            const std::string& senderState, unsigned senderZip, 
            const std::string& recipientName, const std::string& recipientAddress, 
            const std::string& recipientCity, const std::string& recipientState, 
            unsigned recipientZip, double weight, double costPerOunce);
    
    virtual ~Package() = default;

    double getWeight() const;
    double getCostPerOunce() const;

    virtual double calculateCost() const;
    std::string getLabels() const;

protected:
    // Atributos de la dirección del remitente y destinatario
    std::string senderName;
    std::string senderAddress;
    std::string senderCity;
    std::string senderState;
    unsigned senderZip;
    
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    unsigned recipientZip;

private:
    double weight;
    double costPerOunce;
};

#endif
