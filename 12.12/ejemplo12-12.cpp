#include <iostream>
#include <vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main() {
    std::vector<Package*> packages;

    // Ejemplo de instancias de paquetes
    packages.push_back(new TwoDayPackage("Alberto", "123 Main St", "AlbetoLand", "AL", 12345, 
                                         "Macarena", "456 Elm St", "MacaLand", "ML", 54321, 
                                         10.0, 0.5, 2.0));
    packages.push_back(new OvernightPackage("Carol", "Av.Dolores", "Arequipa", "AQP", 67890, 
                                            "Mathortas", "Pocsi 402", "Arequipa", "AQP", 98765, 
                                            5.0, 0.5, 1.5));

    double totalCost = 0.0;
   for (const Package* pkg : packages) {
    std::cout << pkg->getLabels() << std::endl;
    double cost = pkg->calculateCost();
    std::cout << "Shipping Cost: $" << cost << "\n\n";
    totalCost += cost;
}


    std::cout << "Total Shipping Cost: $" << totalCost << std::endl;

    for (auto pkg : packages) {
        delete pkg;
    }

    return 0;
}
