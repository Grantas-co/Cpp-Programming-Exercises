// ====================== 03rd November 2024 - Grantas.co =============================================
// ============================== Exercise 12 =========================================================
// $(ProjectPath)
// Write a C++ program that prompts the user to input the elapsed time for an event in seconds. The
// program then outsputs the elapsed time in hours, minutes, and seconds (For example, if the elapsed
// time is 9,630 seconds, then the output is 2:40:30)
//
//
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (12)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Sunday, Nov. 03       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    int second {60};
    int minutesInAnHourInSeconds {3600};
    
    int seconds {0};
    int minutes {0};
    int hours {0};
    int inputSeconds {0};
    int secondCount {0};
    
    // executable statements
    cout << "\nThis program will output time elapsed in the form on HH:MM:SS based on the seconds inputed." << endl;
    cout << "Enter the seconds ";
    cin >> inputSeconds;
    
    if (inputSeconds >= 0) {
        if (inputSeconds/minutesInAnHourInSeconds >0) {
            hours = inputSeconds/minutesInAnHourInSeconds;
            secondCount = inputSeconds % minutesInAnHourInSeconds;
            minutes = secondCount / second;
            seconds = secondCount % second;
            cout << "\nOutput" << endl;
            cout << hours << ":" << minutes << ":" << seconds << endl;
            cout << "\n";
        }
        else {
            if (inputSeconds/second >0) {
                minutes = inputSeconds / second;
                seconds = inputSeconds % second;
                cout << "\nOutput" << endl;
                cout << hours << ":" << minutes << ":" << seconds << endl;
                cout << "\n";
            }
        }
    }
    else {
        cout << "\nValue must be greater than 0" << endl;
    }
    
    // return statement
    return 0;
}