#include <iostream>

const int romanI = 1, romanV = 5, romanX = 10, romanL = 50, romanC = 100, romanD = 500, romanM = 1000;

int main() {
    using namespace std;
    int decimalInput = 0, remainingNumber = 0;
    char thousand = 'M', fiveHundred = 'D', oneHundred = 'C', fifty = 'L', ten = 'X', five = 'V', one = 'I';
    cout << "Please enter a positive integer: " << endl;
    cin >> decimalInput;
    remainingNumber = decimalInput;
    cout << endl << decimalInput << " is ";

    while (remainingNumber > 0){
        if (decimalInput <= 0){
            cout << endl << "Invalid Input." << endl;
        }
        else if ((remainingNumber >= 1000)){
            remainingNumber -= romanM;
            cout << thousand;
        }
        else if ((remainingNumber >= 500) && (remainingNumber < 1000)){
            remainingNumber -= romanD;
            cout << fiveHundred;
        }
        else if ((remainingNumber >= 100) && (remainingNumber < 500)){
            remainingNumber -= romanC;
            cout << oneHundred;
        }
        else if ((remainingNumber >= 50) && (remainingNumber < 100)){
            remainingNumber -= romanL;
            cout << fifty;
        }
        else if ((remainingNumber >= 10) && (remainingNumber < 50)){
            remainingNumber -= romanX;
            cout << ten;
        }
        else if ((remainingNumber >= 5) && (remainingNumber < 10)){
            remainingNumber -= romanV;
            cout << five;
        }
        else if ((remainingNumber >= 1) && (remainingNumber < 5)){
            remainingNumber -= romanI;
            cout << one;
        }
    }
    return 0;
}
