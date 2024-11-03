// ====================== 03rd November 2024 - Grantas.co =============================================
// ============================== Exercise 13 =========================================================
// $(ProjectPath)
// To make a profit, a local store marks up the prices of its items by a certain percentage. Write a
// C++ program that reads the original price of the item sold, the percentage of the marked-up price,
// and the sales tax rate. The program then outsputs the original price of the item, the pre-rate,
// the sales tax, and the final price of the item. (The final price of the item is the selling price
// plus the sales tax.)
// ====================================================================================================
#include <iostream>

using namespace std;

int main() {
    cout << "\n***************************************\n";
    cout << "*     Chapter 2 Coding Exercise (13)  *\n";
    cout << "*     C++ Programming Book            *\n";
    cout << "*     Author: Grantas Sabaliauskas    *\n";
    cout << "*     Due Date: Sunday, Nov. 03       *\n";
    cout << "***************************************\n";
    
    // varible declaration
    double originalPrice {0.0};
    double markupPercent {0.0};
    double salesTax {0.0};
    double salePrice {0.0};
    
    // executable statements
    cout << "\nPlease enter the original price of the item : €";
    cin >> originalPrice;
    
    cout << "\nWhat is the marked up percent for the item: ";
    cin >> markupPercent;
    
    cout << "\nWhat is the sales tax as a percent: ";
    cin >> salesTax;
    
    salePrice = originalPrice + (originalPrice*(markupPercent/100)) + (originalPrice*(salesTax/100));
    
    cout << "The original price of the item is €" << originalPrice << endl; 
    cout << "The marked up percent is " << markupPercent << "%" << endl;
    cout << "The marked up sales price is €" << originalPrice*(markupPercent/100) << endl;
    cout << "The sales tax is " << salesTax << "%" << endl;
    cout << "The sales tax cost is €" << (salesTax/100)*originalPrice << endl;
    cout << "The sales price including all given information should be €" << salePrice << endl;
    
    // return statement
    return 0;
}