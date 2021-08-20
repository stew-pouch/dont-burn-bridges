#include <iostream>

const int centsInDollar = 100, centsInQuarter = 25, centsInDime = 10, centsInNickel = 5;
// Avoiding use of hard-coded literals

int main() {
    using namespace std;
    int quarter, dime, nickel, penny, totals; 
    // Multiple coid variable to ease functionality expansion.
    cout << "Please enter number of coins:" << endl << "# of quarters: ";
    cin >> quarter;
    cout << endl << "# of dimes: ";
    cin >> dime;
    cout << endl << "# of nickels: ";
    cin >> nickel;
    cout << endl << "# of pennies: ";
    cin >> penny;
    totals = (centsInQuarter * quarter) + (centsInDime * dime) + (centsInNickel * nickel) + penny;
    cout << endl << "The total is " << totals / centsInDollar << " dollars and "
    << totals % centsInDollar << " cents" << endl;
    return 0;
}
