// ====================== 01st November 2024 - Grantas.co ==============================================
// ============================== Exercise 08 =========================================================
// $(ProjectPath)
// Simple wages programme that askes the user to input their name, value, hours worked and to compute
// wages and display to the user
// 
//
//
// ====================================================================================================
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (08)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Friday, Nov. 01       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    const int SECRET {11};
    const double RATE {12.5};
    int num1 {0};
    int num2 {0};
    int newNum {0};
    string name;
    double hoursWorked {0.0};
    double wages {0.0};
    
            // test run inputs
    // test 1
//    num1 = 13, num2 = 28, name = "Jacobson", hoursWorked = 48.3;
    // test 2
//    num1 = 32, num2 = 15, name = "Crawford", hoursWorked = 58.45;
    
    // executable statements
    cout << "\n Enter 2 integers with a space inbetween them: ";
    cin >> num1 >> num2;
    
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << endl;
    
    newNum = num1*2 + num2;
    cout << "The new number, after num1*2 and added to num2 is : " << newNum << endl;
    
    newNum = newNum + SECRET;
    cout << "A secret value has been added to the previous number and has been replaced with " << newNum << endl;
    
    cout << "Please enter your last name : ";
    cin >> name;
    
    cout << "\nPlease enter a value between 0 and 70 for hours worked ";
    cin >> hoursWorked;
    
    wages = hoursWorked * RATE;
    cout << "***************************************\n";
    cout <<  "Name: " << name << endl;
    cout << "Pay Rate: €" << RATE << endl;
    cout << "Hours Worked : " << hoursWorked << endl;
    cout << "Salary: €" << wages << endl;
    
    // return statement
    return 0;
}