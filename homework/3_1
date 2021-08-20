#include <iostream>

const double clubDiscountApplied = 0.9, buyOneGetOne = 0.5;

int main() {
    using namespace std;
    int item1 = 0, item2 = 0;
    char clubInput = 'a';
    bool clubValid = false, clubMember = false;
    double taxes = 0.00, subtotal = 0.00, total = 0.00;
    cout << "Enter the price of first item: ";
    cin >> item1;
    cout << endl << "Enter the price of second item: ";
    cin >> item2;
    while (!clubValid){
        cout << endl << "Does the customer have a club card? (Y/N): ";
        cin >> clubInput; // TODO: Sanitize against string input to avert output flood
        if ((clubInput == 'y') || (clubInput == 'Y')){
            clubMember = true;
            clubValid = true;
        }
        else if ((clubInput == 'n') || (clubInput == 'N')){
            clubValid = true;
        }
    }
    cout << endl << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxes;
    subtotal = item1 + item2;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << endl << "Subtotal: $" << subtotal << endl;
    if (item1 <= item2){ // BOGO applied to cheaper item
        subtotal = (item1 * buyOneGetOne) + item2;
    }
    else{
        subtotal = item1 + (item2 * buyOneGetOne);
    }
    if (clubMember){
        subtotal *= clubDiscountApplied;
    }
    cout << "Price after discounts: $" << subtotal << endl;
    total = subtotal * (1 + (taxes / 100));
    cout << "Total price: $" << total << endl;
    return 0;
}
