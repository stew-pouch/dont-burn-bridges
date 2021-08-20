#include <iostream>

const double poundToKilogram = 0.453592, inchToMeter = 0.0254;

int main() {
    using namespace std;
    double massPound = 0.0, massKilogram = 0.0, heightInches = 0.0, heightMeter = 0.0, bmi = 0.0;
    cout << "Please enter mass (in pounds): ";
    cin >> massPound;
    massKilogram = massPound * poundToKilogram;
    cout << endl << "Please enter height (in inches): ";
    cin >> heightInches;
    heightMeter = heightInches * inchToMeter;
    bmi = massKilogram / (heightMeter * heightMeter);
    cout << endl << "BMI: " << bmi << endl << "The mass status is: ";
    if (bmi < 18.5){
        cout << "underweight." << endl;
    }
    else if ((bmi >= 18.5) && (bmi < 25)){
        cout << "normal." << endl;
    }
    else if ((bmi >= 25) && (bmi < 30)){
        cout << "overweight." << endl;
    }
    else if (bmi >= 30){
        cout << "obese." << endl;
    }
    else {
        cout << endl << "Invalid input." << endl;
        return 200;
    }

    return 0;
}
