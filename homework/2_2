#include <iostream>

const int centsInDollar = 100, centsInQuarter = 25, centsInDime = 10, centsInNickel = 5;
/* Avoiding magic numbers, assign cent value of coins as constants.
 * We shouldn't need to declare penny value, multiplying by 1. */

int main() {
    using namespace std;
    int dollar = 0, cent = 0, centSum = 0, remaining = 0,
    quarter = 0, dime = 0, nickel = 0, penny = 0;
    char dollarCapture = '$', centCapture = '.';
    cout << "Please enter your cash amount in the format $dd.cc: ";
    cin >> dollarCapture >> dollar >> centCapture >> cent;
    centSum = dollar * centsInDollar + cent;
    quarter = centSum / centsInQuarter;
    remaining = centSum % centsInQuarter;
    dime = remaining / centsInDime;
    remaining = remaining % centsInDime;
    nickel = remaining / centsInNickel;
    penny = remaining % centsInNickel;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << endl << '$' << (((dollar * 100.0) + cent) / 100.0) << " is:" << endl;
    if (quarter > 0){
        cout << quarter << " quarter";
        if (quarter > 1){
            cout << 's';
        }
        cout << endl;
    }
    if (dime > 0){
        cout << dime << " dime";
        if (dime > 1){
            cout << 's';
        }
        cout << endl;
    }
    if (nickel > 0){
        cout << nickel << " nickel";
        if (nickel > 1){
            cout << 's';
        }
        cout << endl;
    }
    if (penny > 0){
        if (penny > 1){
            cout << penny << " pennies" << endl;
        }
        else {
            cout << "1 penny" << endl;
        }
    }
    return 0;
}
