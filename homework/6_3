#include <iostream>

double euler_approx(int n);

/* Will produce multiple lines of Euler's number with increasing precision.
* Late decimal place accuracy is subject to CPU limitation of floating point precision.
* My CPU: 14 decimal place precision. */

int main() {
    using namespace std;
    cout.precision(20);
    for (int n = 1; n <= 20; n++) {
        cout << "n = " << n << '\t' << euler_approx(n) << endl; }
    return 0;
}

double euler_approx(int n){
    double factorialStep = 1.0, primaryStep = 1.0, seriesSum = 0.0;
    for (int i = 1; i <= n; i++){
        factorialStep *= i;
        seriesSum += 1.0/factorialStep;
    }
    primaryStep += seriesSum;  //Finish initialized to 1 for the first, non-factorial term.
    return primaryStep;
}
