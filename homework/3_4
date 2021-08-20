#include <iostream>

const int roundFloor = 1, roundCeiling = 2, roundOff = 3;

int main() {
    using namespace std;
    double realNumber = 0.0;
    int chooseMethod = 0, wholeNumber = 0;
    cout << "Please enter a Real number:" << endl;
    cin >> realNumber;
    wholeNumber = (int) realNumber;//Casting a float as (int) will discard ALL floating decimal value!
    cout << "Choose your rounding method:" << endl << "1. Floor round" << endl <<
    "2. Ceiling round" << endl << "3. Round to the nearest whole number" << endl;
    cin >> chooseMethod;
    switch (chooseMethod){
        case roundFloor:
            if ((realNumber < 0) && (realNumber - wholeNumber != 0)){
                cout << wholeNumber - 1 << endl;
            }
            else if ((realNumber < 0) && (realNumber - wholeNumber == 0)){ //Do nothing if input is already whole.
                cout << wholeNumber << endl;
            }
            else if (realNumber == 0){
                cout << 0 << endl;
            }
            else if ((realNumber > 0)){ //The way the C++ casts to int remove the need for separate flow on inputs > 0.
                cout << wholeNumber << endl;
            }
            break;
        case roundCeiling:
            if (realNumber < 0){
                cout << wholeNumber << endl;
            }
            else if (realNumber == 0){
                cout << 0 << endl;
            }
            else if ((realNumber > 0) && (realNumber - wholeNumber == 0)){
                cout << wholeNumber << endl;
            }
            else if ((realNumber > 0) && (realNumber - wholeNumber != 0)){
                cout << wholeNumber + 1 << endl;
            }
            break;
        case roundOff:
            if ((realNumber < 0) && (realNumber - wholeNumber <= -0.5)){
                cout << wholeNumber - 1 << endl;
            }
            else if ((realNumber < 0) && (realNumber - wholeNumber > -0.5)){
                cout << wholeNumber << endl;
            }
            else if (realNumber == 0){
                cout << 0 << endl;
            }
            else if ((realNumber > 0) && (realNumber - wholeNumber >= 0.5)){
                cout << wholeNumber + 1 << endl;
            }
            else if ((realNumber > 0 ) && (realNumber - wholeNumber < 0.5)){
                cout << wholeNumber << endl;
            }
            break;
        default:
            cout << "Invalid input." << endl;
            break;
    }
    return 0;
}
