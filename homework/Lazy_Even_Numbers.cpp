#include <iostream>

int main() {
    using namespace std;

    cout << "While loop" << endl;
    int inputWhile = 0, count = 1;
    cout << "Please enter a positive integer: ";
    cin >> inputWhile;
    cout << endl;
    if (inputWhile <= 0){
        cout << "Invalid Input." << endl;
        return 200;
    }
    while (count <= inputWhile){
        cout << count * 2 << endl;
        count++;
    }

    cout << endl << "For loop" << endl;
    int inputFor = 0;
    cout << "Please enter a positive integer: ";
    cin >> inputFor;
    cout << endl;
    if (inputFor <= 0){
        cout << "Invalid Input." << endl;
        return 201;
    }
    for (int i = 1; i <= inputFor; i++){
        cout << i * 2 << endl;
    }

    return 0;
}
