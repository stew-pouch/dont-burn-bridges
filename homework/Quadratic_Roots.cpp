/* User is queried for three numerical values: a, b, & c.  These values correspond to the numerical
 * constant in a quadratic polynomial equation: f(x) = ax^2 + bx + c.  The program returns as 
 * output the quadratic roots based on the given values, if they exist.  Supports imaginary and
 * complex roots. */

#include <iostream>
#include <cmath> // Uses sqrt()

int main() {
    using namespace std;
    double a = 0.0, b = 0.0, c = 0.0, discriminant = 0.0;
    bool hasImaginary = false;
    cout << "Please enter a value of a: ";
    cin >> a; //Square term
    cout << endl << "Please enter a value of b: ";
    cin >> b; // Interm
    cout << endl << "Please enter a value of c: ";
    cin >> c; // y-intercept
    cout << endl;
    discriminant = (b * b) - (4 * a * c);
    if (discriminant < 0){
        hasImaginary = true;
    }

    if (a == 0.0){
        if (b == 0.0 && c == 0.0){
            // TODO: Non-numerical input reaches this logic after compiler update.
            // Infinite solutions
            cout << "This equation has an infinite number of solutions." << endl;
            cout << "\t0 = 0" << endl;
        }
        else if (b == 0.0 && c != 0.0){
            // No solution
            cout << "This equation has no solution." << endl;
        }
        else{
            // Not Quadratic
            // x = -c/b
            cout << "This equation has one real solution." << endl;
            cout << "\tx = " << -c / b << endl;
        }
    }
    else if (hasImaginary){ // Negative square root
        if (b == 0){
            cout << "This equation has two imaginary roots." << endl;
            cout << "\tx = " << (sqrt(-discriminant) / (2 * a)) << 'i';
            cout << ",\t x = -" << (sqrt(-discriminant) / (2 * a)) << 'i' << endl;
        }
        else {
            cout << "This equation has two complex roots." << endl;
            cout << "\tx = " << -b / (2.0 * a) << " + " << (sqrt(-discriminant) / (2 * a)) << 'i';
            cout << ",\t x = " << -b / (2.0 * a) << " - " << (sqrt(-discriminant) / (2 * a)) << 'i' << endl;
        }
    } // Real quadratic solutions
    else if (b * b == 4 * a * c){
        cout << "This equation has one real root." << endl;
        cout << "\tx = " << -b / (2.0 * a) << endl;
    }
    else if (b * b > 4 * a * c){
        cout << "This equation has two real roots." << endl;
        cout << "\tx = " << (-b + sqrt(discriminant))/(2 * a);
        cout << ",\t x = " << (-b - sqrt(discriminant))/(2 * a) << endl;
    }
    else {
        // Capture invalid input.
        cout << endl << "invalid input." << endl; // TODO: Fix logic flow for invalid input.
        return 200; // Exit code 2XX will be used to reflect invalid input delivered by the user.
    }
    return 0;
}
