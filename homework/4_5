#include <iostream>

int main() {
    using namespace std;
    int size = 0;
    char hourglass = '*', spacing = ' ';
    cout << "Please enter a positive integer: ";
    cin >> size;
    if (size <= 0){
        cout << "Invalid input." << endl;
        return 200;
    }
    cout << endl;
    for (int i = size; i > 0; i--){
        for (int j = size - i; j > 0; j--){
            cout << spacing << spacing;
        }
        for (int k = (2 * i); k > 1; k--){
            cout << hourglass << spacing;
        }
        cout << endl;
    }
    for (int i = 1; i <= size; i++){
        for (int j = size - i; j > 0; j--){
            cout << spacing << spacing;
        }
        for (int k = (2 * i); k > 1; k--){
            cout << hourglass << spacing;
        }
        cout << endl;
    }
    return 0;
}
