#include <iostream>
#include "baseCF.h"
#include "building.h"
#include "bycicle.h"
#include "car.h"

int main() {
    std::cout<<"******************************\n";

    baseCF* vector[3];
    vector[0] = new Bycicle(1000, 150);
    vector[1] = new Car("toyota", "gnv", 4, 100, 4);
    vector[2] = new Building("Alcatel", 18, 123, 50);

    std::cout<<"****************************\n";

    for (int i = 0; i < 3; ++i) {
        std::cout << vector[i]->getInfo() << std::endl;
        delete vector[i]; 
    }
    
    std::cout<<"********************************\n";
}
