#include <iostream>
#include <cmath>


void print_divisors (int num);

int main() {
    using namespace std;
    int product = 1;
    while (product < 2) {
        cout << "Please enter a positive integer >= 2: ";
        cin >> product;
        cout << endl;
    }
    print_divisors(product);
    return 0;
}

void print_divisors (int num){
    using namespace std;
    int edgeCase = 0, perfectSquare = 0;
    edgeCase = sqrt(num);
    for (int i = 1; i <= edgeCase; i++){
        if (num % i == 0){
            cout << i << ' ';
            perfectSquare = i;  //Prevents second output of the square root when num is a perfect square.
        }
    }
    for (int i = edgeCase; i > 0; i--){
        if ((num % i == 0) && (i != num) && (num / i != perfectSquare)){ // Perfect square catch
            cout << num / i << ' ';
        }
    }
    cout << endl;
    return;
}
