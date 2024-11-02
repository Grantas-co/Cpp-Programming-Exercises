// ====================== 01st November 2024 - Grantas.co =============================================
// ============================== Exercise 09 =========================================================
// $(ProjectPath)
// Write a programm that prompts the user to enter 5 test scores and then prints the average test score
// (Assume that the test scores are decimal numbers)
//
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (09)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Friday, Nov. 01       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double score1 {0.0};
    double score2 {0.0};
    double score3 {0.0};
    double score4 {0.0};
    double score5 {0.0};
    double averageScore {0.0};
    
    // executable statements
    cout << "\nEnter the 5 scores with a space in betweeen them to find the average score: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    
    averageScore = (score1 + score2 + score3 + score4 + score5)/5;
    cout << "The average score is " << averageScore << endl; 
    
    // return statement
    return 0;
}