// =================== October 13th 2024 - Grantas.co =====================
// ========================== Exercise 15 =================================
// Given the radius, in centimeters, and price of a pizza
// design an algorithm to find the price of the pizza per square centimeter
// ========================================================================
#include <iostream>
using namespace std;

int main() {
    
    double radius {0.0};
    double price {0.0};
    
    cout << "Enter the pizza radius in centimeters: ";
    cin >> radius;
    cout << "Enter the price of the pizza: €";
    cin >> price;
    
    // Calculation of Area
    const double pi {3.14159};
    double area {0.0};
    area = radius * radius * pi;
    
    // Cost per square centimeter
    double cpsc {0.0};
    cpsc = price / area;
    
    cout << "For a pizza with radius " << radius << "cm and price of €" << price << endl;
    cout << "The cost per square centimeter is : €" << cpsc << endl;
    
    return 0;
}