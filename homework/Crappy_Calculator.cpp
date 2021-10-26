#include <iostream>

int main() {
    using namespace std;
    int first = 0, second = 0;
    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> first >> second;
    cout << first << " + " << second << " = " << first + second << endl;
    cout << first << " - " << second << " = " << first - second << endl;
    cout << first << " * " << second << " = " << first * second << endl;
    cout << first << " / " << second << " = " << first / (float)second << endl;
    cout << first << " div " << second << " = " << first / second << endl;
    cout << first << " mod " << second << " = " << first % second << endl;
    return 0;
}
