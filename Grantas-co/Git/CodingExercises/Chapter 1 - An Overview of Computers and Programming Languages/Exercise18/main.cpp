// ===================== October 13th 2024 - Grantas.co ==============================================
// ============================== Exercise 18 ========================================================
// Tom and Jerry opened a new lawn service. 
// They provide three types of services: mowing, fertilizing, and planting trees. 
// The cost of mowing is €35.00 per 5,000 square meters, fertilizing is €30.00 per application, 
// and planting a tree is €50.00. Write an algorithm that prompts the user to enter the area 
// of the lawn, the number of fertilizing applications, and the number of trees to be planted.
// The algorithm then determines the billing amount. (Assume that the user orders all three services.)
// ===================================================================================================
#include <iostream>
using namespace std;

int main() {
    
    // Cost per square meter
    double area {5000};
    double costOfArea {35.0};
    double costPerMowing {0.0};
    costPerMowing = costOfArea/area;
    
    const double costPerFertilizer {30.00};
    const double costPerTreePlanting {50.00};
    
    double areaToMow {0.0};
    double costOfMowing {0.0};
    double amountToFertilize {0.0};
    double costOfFertilizer {0.0};
    double amountOfTrees {0.0};
    double costOfPlantingTrees {0.0};
    double totalCost {0.0};
    
    cout << "Welcome to Tom and Jerry lawn service\n";
    cout << "The cost of mowing is €35.00 per 5,000 square meters\n"; 
    cout << "The cost per fertiliizing is €30.00\n";
    cout << "The cost to plant a tree is €50.00\n";
    cout << "=======================================================\n";
    cout << "What is the area of the lawn you would like to be mowed: ";
    cin >> areaToMow;
    cout << "How many applications of fertilizing is needed: ";
    cin >> amountToFertilize;
    cout << "How many trees need to be planted: ";
    cin >> amountOfTrees;
    
    // Cost of mowing
    costOfMowing = areaToMow * costPerMowing;
    
    // Cost of fertilizing
    costOfFertilizer = amountToFertilize * costPerFertilizer;
    
    // Cost of tree planting
    costOfPlantingTrees = amountOfTrees * costPerTreePlanting;
    
    // Total Cost
    totalCost = costOfMowing + costOfFertilizer + costOfPlantingTrees; 
    
    cout << "The cost will be the following:\n";
    cout << "Mowing: €" << costOfMowing << endl;
    cout << "Fertilizing: €" << costOfFertilizer << endl;
    cout << "Tree planting: €" << costPerTreePlanting << endl;
    cout << "=======================================================\n";
    cout << "The total cost would be €" << totalCost << endl;
    
    return 0;
}