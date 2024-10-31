// ===================== October 13th 2024 - Grantas.co ===============================================
// ============================== Exercise 19 =========================================================
// Jason typically uses the internet to buy various items. If the total cost of the items ordered,
// at one time, is €200 or more, then the shipping and handling is free; otherwise, the shipping
// is €10 per item. Design an algorithm that prompts Jason to enter the number of items ordered and the
// price of each item. The algorithm then outputs the total billing amount. Your algorithm must use
// a loop to get the price of each item.
// ====================================================================================================
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int numberOfOrder {0};
    
    cout << "Jason how many items have you ordered: ";
    cin >> numberOfOrder;
    
    double totalCost {0.0};
    vector<double> costOfItems(numberOfOrder);
    int amountOfItems {0};
    
    for (int i=1; i<=numberOfOrder; ++i) {
        cout << "Item " << i << " cost: €";
        cin >> costOfItems[i-1];
        totalCost += costOfItems[i-1];
        amountOfItems += 1;
    }
    
    if (totalCost >= 200) {
        cout << "Shipping is for free!! You've saved €" << amountOfItems*10 << endl;
        cout << "Your total cost is €" << totalCost << endl;
    } else {
        cout << "You will need to pay €10 per item for delivery which will be €" << amountOfItems*10 << endl;
             cout << "Your total cost is €" << totalCost + (amountOfItems*10)  << endl;
    }
    
    return 0;
}