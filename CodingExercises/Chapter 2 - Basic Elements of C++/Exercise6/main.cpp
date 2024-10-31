// ====================== 31st October 2024 - Grantas.co ==============================================
// ============================== Exercise 06 =========================================================
// $(ProjectPath)
// Simple input and output statements
//
//
//
//
// ====================================================================================================
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (06)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Thursday, Oct. 31     *\n";
    cout << "***************************************\n";
    
    // varible declaration
    string name;
    double studyHours {0.0};
    
    // executable statements
    cout << "\nEnter name: ";
    cin >> name;
    
    cout << "\nEnter the amount of study hours: ";
    cin >> studyHours;
    
    cout << "Hello, " << name << "! Today, you need to study " << studyHours << " hours for the exam." << endl; 
    // return statement
    
    return 0;
}