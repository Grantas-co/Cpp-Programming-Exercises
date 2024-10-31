// ===================== October 13th 2024 - Grantas.co ===========================
// ============================== Exercise 16 =====================================
// The dealer's cost of a car is 85% of the listed price. 
// The dealer would accept any offer that is at least €500 over the dealer's cost. 
// Design an algorithm that prompts the user to input the list price of the car and 
// print the least amount that the dealer would accept for the car.
// ================================================================================
#include <iostream>
using namespace std;

int main() {
    
    double costOfCar {0.0};
    const double dealersCostAsAPercent {0.85};
    double minimumSalePrice {0.0};
    double listedPrice {0.0};
    const int commision {500};
    
    cout << "What is the listed price : €";
    cin >> listedPrice;
    
    costOfCar = dealersCostAsAPercent * listedPrice;
    minimumSalePrice = costOfCar + commision;
    
    if (listedPrice < minimumSalePrice) {
        cout << "The listed price is the best deal we can give you which is: €" << listedPrice << endl;
    } else {
        cout << "The minimum the dealer will accept is : €" << minimumSalePrice << endl;
        }
        
    return 0;
}