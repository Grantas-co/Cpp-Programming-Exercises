// ===================== October 14th 2024 - Grantas.co ===============================================
// ============================== Exercise 20 =========================================================
// An ATM allows a customer to withdraw a maximum of $500 per day.
// If a customer withdraws more than €300, the service charge is 4% of the amount over €300. 
// If the customer does not have sufficient money in the account, the AIM informs the customer about 
// the insufficient funds and gives the customer the option to withdraw the money for a service charge 
// of €25.00. If there is no money in the account or if the account balance is negative, the ATM does 
// not allow the customer to withdraw any money. If the amount to be withdrawn is greater than €500, 
// the ATM informs the customer about the maximum amount that can be withdrawn. Write an algorithm that 
// allows the customer to enter the amount to be withdrawn. The algorithm then checks the total amount 
// in the account, dispenses the money to the customer, and debits the account by the amount withdrawn 
// and the service charges, if any. (9)
// ====================================================================================================
#include <iostream>
#include <vector>
using namespace std;

int main() {
    double bankBalance {0.0};
    const double maxLimit {500.0};
    const double serviceCharge {0.04};
    int requestForWithdraw {0};
    const double insufficientFundsCharge {25.0};
    
    // Prompt user for amount of money in account
    cout << "\nTesting, input amount of money in balance: €";
    cin >> bankBalance;
    
    // Prompt the amount to withdraw
    cout << "\nCurrently you have €" << bankBalance << endl;
    cout << "How much would you like to withrdaw: €";
    cin >> requestForWithdraw;
    
    // Case 1: Check if withdrawl exeeds daily limit
    if (requestForWithdraw > maxLimit) {
        cout << "You cannot withraw more then €500 per day. Please enter a valid amount" << endl;
    }
    
    // Case 2: Check if bank balance is zero or negative
    else if (bankBalance <= 0) {
        cout << "Balance is to low to make a withdrawal." << endl;
    }
    
    // Case 3: Check if withdrawal us possuble given the current balance 
    else if (requestForWithdraw > bankBalance) {
        cout <<  "Insufficient funds. You can withdraw the requested amount, but a €25 service charge will be applied" << endl;
        char choice;
        cout << "Do you want to proceed with the withdrawal and pay the €25 charge? (y/n): ";
        cin >> choice; 
        
        if (choice == 'y' || choice == 'Y') {
            bankBalance -= requestForWithdraw + insufficientFundsCharge;
            cout << "You have withdrawn €" << requestForWithdraw << " with a €25 service charge." << endl;
            cout << "Your current balance is €" << bankBalance << endl;
        } else {
            cout << "Transaction cancelled." << endl;
        }
    }
    
    // Case 4: Check if withdrawal is more then €300 to apply a 4% charge
    else if (requestForWithdraw > 300 && requestForWithdraw <= 500) {
        double serviceChargeSum =  (requestForWithdraw - 300) * serviceCharge;
        bankBalance -= requestForWithdraw + serviceChargeSum;
        cout << "You withdrawn €" << requestForWithdraw << " With a 4% service charge of €" << serviceChargeSum << endl;
        cout << "Your current balance is €" << bankBalance << endl;
    }
    
    // Case 5: Regular withdrawal with no service charge
    else {
        bankBalance -= requestForWithdraw;
        cout << "You have withdrawn €" << requestForWithdraw << " with no additional service charge." << endl;
        cout << "Your current balance is €" << bankBalance << endl;
    }
    
    return 0;
}
