// ====================== 31st October 2024 - Grantas.co ==============================================
// ============================== Exercise 05 =========================================================
// $(ProjectPath)
// User is prompt to input a value of the radius of the circle and the programme will output the
// area and the circumference of the circle
//
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (5)   *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Thursday, Oct. 31     *\n";
    cout << "***************************************\n";
    
    // varible declaration
    const double PI = 3.14;
    double radius {0.0};
    double area {0.0};
    double circumference {0.0};
    
    // executable statements
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
    
    // return statement
    
    return 0;
}