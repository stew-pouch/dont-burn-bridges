#include <iostream>
#include <string>

const double rateRegular = 0.40, rateNights = 0.25, rateWeekends = 0.15;

int main() {
    using namespace std;
    int callStartHour = 0, callStartMinute = 0, callDuration = 0, callTruncate = 0;
    string weekday = "";
    char colonCapture = ':'; // There should be a better way to handle unneeded input pieces.
    cout << "Please provide the time the call started in 24-hour notation (HH:mm): ";
    cin >> callStartHour >> colonCapture >> callStartMinute;
    cout << endl << "Please provide the call duration in minutes: ";
    cin >> callDuration;
    cout << endl << "Please specify the day of the week the call started (Su, Mo, Tu, We, Th, Fr, Sa): ";
    cin >> weekday; // Simplify flow branching, assume valid user input.
    callTruncate = (callStartHour * 100) + callStartMinute;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if ((weekday == "Sa") || (weekday == "Su")){ //Filter weekend first, weekdays after can be safely ignored.
        cout << endl << "Call cost: $" << rateWeekends * callDuration << endl;
    }
    else if ((callTruncate >= 800) && (callTruncate <= 1800)){
        //Simpler flow control to isolate a single, continuous number range.
        cout << endl << "Call cost: $" << rateRegular * callDuration << endl;
    }
    else if ((callTruncate < 0) || (callTruncate >= 2400)){
        cout << endl << "Invalid input." << endl;
        return 200;
    }
    else { //If not a weekend or peak-hour call, that leaves only night rates.
        cout << endl << "Call cost: $" << rateNights * callDuration << endl;
    }
    return 0;
}
