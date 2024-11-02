// ====================== 01st November 2024 - Grantas.co =============================================
// ============================== Exercise 07 =========================================================
// $(ProjectPath)
// Write a program that prompts the user to input a decimal nunmber and outputs the number rounded to
// the nearest integer
//
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (07)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Friday, Nov. 01       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double valueToRound {0.0};
    int roundedNumber {0};
    
    // executable statements
    cout << "\nEnter any number that you want to round to the nearest integer: ";
    cin >> valueToRound;
    
    roundedNumber = valueToRound + 0.5;
    
    cout << valueToRound << " is rounded to " << roundedNumber << endl;
    
    // return statement
    return 0;
}