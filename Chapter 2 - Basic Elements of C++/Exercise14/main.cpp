// ====================== 03rd November 2024 - Grantas.co =============================================
// ============================== Exercise 14 =========================================================
// $(ProjectPath)
// (Hard drive storage capacity) If you buy a 40 GB hard drive, then chances are that the actual 
// storage on the hard drive is not 40 GB. This is due to the fact that, typically, a manufacturer uses
// 1,000 bytes as the value of 1K bytes, 1,000 K bytes as the value of 1 MB, 1,000 MB as the value 
// of 1 GB. Therefore, a 40 GB hard drive contains 40,000,000,000 bytes. However, in computer memory,
// as given in Table 1-1 (Chapter 1), 1 KB is equal to 1,024 bytes, and so on. So the actual storage 
// on a 40 GB hard drive is approximately 37.25 GB. (You might like to read the fine print next time 
// you buy a hard drive.) Write a program that prompts the user to enter the size of the hard drive 
// specified by the manufacturer, on the hard drive box, and outputs the actual storage capacity of 
// the hard drive.
// ====================================================================================================
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (14)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Sunday, Nov. 03       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double hardDiskStorageCapacity {0.0};
    
    // executable statements
    cout << "\nEnter the amount of storage specified by the manufacturer in GB: ";
    cin >> hardDiskStorageCapacity;
    
    if (hardDiskStorageCapacity >= 0 ) {
        double acutalStorageInGB = (hardDiskStorageCapacity* 1000000000) / (1024 * 1024 * 1024);
        
        cout << fixed << setprecision(2);
        cout << "The acutal storage capacity of the hard drive is approx " << acutalStorageInGB << " GB.\n";
    }
    else {
        cout << "\nValue is invalid, Hard drive storage must be greater than 0" << endl;
    }
    
    // return statement
    return 0;
}