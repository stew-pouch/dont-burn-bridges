#include <iostream>

int main() {
    using namespace std;
    int decimalInput = 0, placeholder = 0, stack = 0, lead = 1;
    cout << "Please enter a positive integer: ";
    cin >> decimalInput;
    if (decimalInput < 0){
        cout << "Invalid input." << endl;
        return 200;
    }
    cout << endl;
    cout << " The binary representation of " << decimalInput << " is ";
    placeholder = decimalInput;
    while (placeholder > 0){
        if ((stack == 0) && (placeholder % 2 == 0)){
            ; //Do nothing given the current setup.  We do not want starting zeros caught in the else flow.
        }
        else if ((stack == 0) && placeholder % 2 == 1) {
            stack = (placeholder % 2) * lead;
        }
        else {
            stack = (stack) + ((placeholder % 2) * lead);
        }
        lead *= 10;
        placeholder = placeholder / 2;
    }
    cout << stack << endl;

    return 0;
}
