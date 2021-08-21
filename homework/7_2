#include <iostream>
#include <cmath>

void analyze_divisors(int num, int& outSumDivs);
bool is_perfect(int num);

int sum = 0; // TODO: Relocate global variables to more appropriate locations.

int main() {
    using namespace std;
    int num = 0;
    while (num < 2) {
        cout << "Please enter a positive integer >=2: ";
        cin >> num;
        cout << endl;
    }

    // Tested perfect numbers up to 33550336 and beyond. Compared against https://oeis.org/A000396
    cout << endl << "Perfect numbers: " ;
    for (int i = 2; i <= num; i++) {
        analyze_divisors(i, sum);
        if (is_perfect(i)){
            cout << i << ' ';
        }
    }

    // Tested amicable numbers up to 87633 and beyond.  Compared against https://oeis.org/A259180
    cout << endl << endl << "Amicable numbers: " << endl;
    for (int j = 2; j <= num; j++){
        int hold = j;
        analyze_divisors(j, hold);
        if ((hold > j) && (hold <= num)){
            int compare;
            analyze_divisors(hold, compare);
            if (j == compare){
                cout << hold <<  ", " << compare << endl;
            }
        }
    }
    return 0;
}

void analyze_divisors(int num, int& outSumDivs){
    int squareEfficient = 0, stopSquare = 0;
    outSumDivs = 0;
    squareEfficient = sqrt(num);
    for (int i = 1; i <= squareEfficient; i++){
        if (num % i == 0){
            outSumDivs += i;
            stopSquare = i;
        }
    }
    for (int j = squareEfficient; j > 1; j--){
        if ((num % j == 0) && (j != num) && (num / j != stopSquare)){
            outSumDivs += num / j;
        }
    }
}

bool is_perfect(int num){
    if (num == sum){
        return true;
    }
    else {
        return false;
    }
}
