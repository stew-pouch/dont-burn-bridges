#include <iostream>
#include <cmath>


int main() {
    using namespace std;
    cout << "For loop" << endl;
    // Scope Definition
    int scope = 0, input = 0, product = 1;
    double geometricFor = 0.0;
    cout << "Please enter the length of the sequence: ";
    cin >> scope;
    cout << endl << "Please enter your sequence: " << endl;
    for (int i = 0; i < scope; i++){
        cin >> input;
        product *= input;
    }
    geometricFor = pow(product, (1.0 / scope));
    cout << endl << "The geometric mean is: " << geometricFor << endl;

    cout << endl << "While loop" << endl;
    //Sentinel Input
    int sentinel = -1, counter = 0, internal = 1, anotherInput = 0;
    bool sentinelTripped = false;
    double geometricWhile = 0.0;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line.  " <<
    "End your sequence by typing -1: " << endl;
    while (sentinelTripped == false){
        cin >> anotherInput;
        if (anotherInput <= sentinel){
            sentinelTripped = true;
        }
        else{
            internal *= anotherInput;
            counter++;
        }
    }
    geometricWhile = pow(internal, (1.0 / counter));
    cout << "The geometric mean is : " << geometricWhile << endl;

    return 0;
}
