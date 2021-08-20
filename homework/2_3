#include <iostream>

const int minutesInHour = 60, hoursInDay = 24;

int main() {
    using namespace std;
    int johnDays = 0, johnHours = 0, johnMinutes = 0, billDays = 0, billHours = 0,
    billMinutes = 0, totalDays = 0, totalHours = 0, totalMinutes = 0;
    cout << "Please enter the number of days John has worked: ";
    cin >> johnDays;
    cout << endl << "Please enter the number of hours John has worked: ";
    cin >> johnHours;
    cout << endl << "Please enter the number of minutes John has worked: ";
    cin >> johnMinutes;
    cout << endl << endl << "Please enter the number of days Bill has worked: ";
    cin >> billDays;
    cout << endl << "Please enter the number of hours Bill has worked: ";
    cin >> billHours;
    cout << endl << "Please enter the number of minutes Bill has worked: ";
    cin >> billMinutes;
    totalMinutes = (johnMinutes + billMinutes) % minutesInHour;
    totalHours = ((johnHours + billHours) + ((johnMinutes + billMinutes) / minutesInHour))
            % hoursInDay;
    totalDays = johnDays + billDays + ((johnHours + billHours + ((johnMinutes + billMinutes)
            / minutesInHour)) / hoursInDay);
    cout << endl << endl << "The total time both of them worked together is : " << totalDays
    << " days, " << totalHours << " hours and " << totalMinutes << " minutes." << endl;
    return 0;
}
