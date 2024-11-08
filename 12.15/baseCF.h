#ifndef BASECF_H
#define BASECF_H
#include <string>
class baseCF {
public:
    virtual ~baseCF() = default;
    virtual float getCarbonFP() const = 0;
    virtual std::string getInfo() const = 0;
};

#endif // BASECF_H
