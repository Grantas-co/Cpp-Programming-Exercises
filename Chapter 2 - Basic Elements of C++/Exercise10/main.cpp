// ====================== 01st November 2024 - Grantas.co =============================================
// ============================== Exercise 10 =========================================================
// $(ProjectPath)
// Write a program that prompts the user to input 5 decimal numbers. The program should then add the
// 5 decimals, convert the num to the nearest integer, and print the results
//
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (10)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Friday, Nov. 01       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double decValue1 {0.0};
    double decValue2 {0.0};
    double decValue3 {0.0};
    double decValue4 {0.0};
    double decValue5 {0.0};
    double sum{0.0};
    int outputRoundedValue {0};
    
    // executable statements
    cout << "\nThis program will add up 5 decimals and will round the sum value"<< endl;
    cout << "Please enter 5 decimals with a space inbetween them : ";
    cin >> decValue1 >> decValue2 >> decValue3 >> decValue4 >> decValue5;
    
    sum = decValue1 + decValue2 + decValue3 + decValue4 + decValue5;
    cout << "The sum of all the values inputed is " << sum << endl;
    
    outputRoundedValue = sum + 0.5;
    cout << "The rounded value is " << outputRoundedValue << endl;

    
    // return statement
    return 0;
}