// ====================== 03rd Novemeber 2024 - Grantas.co ============================================
// ============================== Exercise 11 =========================================================
// $(ProjectPath)
// Write a program that prompts the capacity, in litres, of an automobile fuel tank and the km per litre
// the auomobile can be driven. The program outputs the number of miles the automobile can be driven
// without refueling
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (11)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Sunday, Nov. 03       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double fuelCapacityOfCar {0.0};
    double kmPerLitre {0.0};
    double distanceOnAFullTank {0.0};
    
    // executable statements
    cout << "\nThis program will compute the amount of km your car can drive by providing the fuel capacity of the car and the km/litre." << endl;
    cout << "What is the cars fuel capacity: ";
    cin >> fuelCapacityOfCar;
    
    
    // test case for if the input values are less then logical values
    if (fuelCapacityOfCar <= 0) {
        cout << "Invalid selection, Value of capacity must be more then 0 L" << endl;
    } 
    else {
        cout << "Your car capcity is " << fuelCapacityOfCar << "L" << endl;
        cout << "\nWhat is the km per litre of the car: ";
        cin >> kmPerLitre;
        if (kmPerLitre <=0 ) {
            cout << "Invalid selection, The efficiency of your car must be more then 0 L" << endl;
        }
        else {
            distanceOnAFullTank = kmPerLitre * fuelCapacityOfCar;
            cout << "Your car with " << fuelCapacityOfCar << "L and " << kmPerLitre << " km/l, your car can drive on a full tank " << distanceOnAFullTank << "km." << endl;
        }
    }
    
    // return statement
    return 0;
}