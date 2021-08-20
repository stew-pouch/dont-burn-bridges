#include <iostream>

int main() {
    using namespace std;
    int n = 0, check = 0, evens = 0, odds = 0;
    cout << "Please input a positive integer, n: ";
    cin >> n;
    if (n <= 0){
        cout << "Invalid input." << endl;
        return 200;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        check = i;
        while (check > 0){
            if (((check % 10) % 2) == 0){
                evens += 1;
                check = check / 10;
            }
            else if (((check % 10) % 2) == 1){
                odds += 1;
                check = check / 10;
            }
        }
        if (evens > odds){
            cout << i << endl;
        }
        evens = 0;
        odds = 0;
    }
    return 0;
}
