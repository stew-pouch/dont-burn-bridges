#include <iostream>

long fib(int n);

int main() {
    using namespace std;
    int num = 0;
    cout << "Please enter a positive integer: ";
    cin >> num;
    if (num <= 0){
        cout << "Invalid input." << endl;
        return 200;
    }
    cout << endl;
    cout << fib(num) << endl;
    return 0;
}

long fib(int n){
    long first = 1, step = 1, sum = 0, out = 0; // Initialized as longs in order to have accurate results beyond 46.
    for (int i = 0; i < n; i++){
        if (i % 3 == 0){
            out = first;
            sum = first + step;
        }
        else if (i % 3 == 1){
            out = step;
            first = step + sum;
        }
        else if (i % 3 == 2){
            out = sum;
            step = sum + first;
        }
    }
    return out;
}
