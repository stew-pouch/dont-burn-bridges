#include <iostream>
#include <string>

int main() {
    using namespace std;
    string studentName = "", studentStatus = "";
    int graduationYear = 0, currentYear = 0, gapYear = 0;
    gapYear = graduationYear - currentYear;
    cout << "Please enter your name: ";
    cin >> studentName;
    cout << endl << "Please enter your graduation year: ";
    cin >> graduationYear;
    cout << endl << "Please enter current year: ";
    cin >> currentYear;
    gapYear = graduationYear - currentYear;
    if (gapYear >= 5){
        studentStatus = "ready to apply";
    }
    else if (gapYear == 4){
        studentStatus = "a Freshman";
    }
    else if (gapYear == 3){
        studentStatus = "a Sophomore";
    }
    else if (gapYear == 2){
        studentStatus = "a Junior";
    }
    else if (gapYear == 1){
        studentStatus = "a Senior";
    }
    else { // gapYear <= 0
        studentStatus = "Graduated";
    }
    cout << endl << studentName << ", you are " << studentStatus << '.' << endl;
    return 0;
}
