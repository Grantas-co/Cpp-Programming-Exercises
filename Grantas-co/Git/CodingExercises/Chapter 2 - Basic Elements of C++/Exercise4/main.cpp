// ====================== 31st October 2024 - Grantas.co ==============================================
// ============================== Exercise 04 =========================================================
// $(ProjectPath)
// Average between *double* 3 numbers is the sum of all divided by the amount of numbers
//
//
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (4)   *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Thursday, Oct. 31     *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double num1 {75.35};
    double num2 {-35.56};
    double num3 {15.76};
    double average {0};
    
    // executable statements
    average = (num1 + num2 + num3)/3;
    cout << "\nThe average of: " << num1 << ", " << num2 << ", " << num3 << " is " << average << ".\n" << endl;
    
    // return statement
    
    return 0;
}