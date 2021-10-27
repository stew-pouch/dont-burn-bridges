/* User is queried for a year, and its starting day.  The program returns as output
* a calender, with accurate to the day of the week and for leap years.  Future 
* improvements could include [marking] holidays. */
#include <iostream>
using namespace std;

bool is_leap_year (int year);
int print_month_calender(int numOfDays, int startingDay);
int print_year_calender(int year, int startingDay);


int main() {
    int year = 0, start = 0;
    cout << "Please enter a year and its first day (Ex. 2022 7): ";
    cin >> year >> start;
    cout << endl;
    print_year_calender(year, start);

    return 0;
}

bool is_leap_year (int year){
    if ((year % 400) == 0){
        return true;
    }
    else if (((year % 4) == 0) && ((year % 100) != 0)) {
        return true;
    }
    else {
        return false;
    }
}

int print_month_calender(int numOfDays, int startingDay){
    int finalDay = 1;
    cout << "Sun" << '\t' << "Mon" << '\t' << "Tue" << '\t' << "Wed" << '\t' << "Thr" <<
    '\t' << "Fri" << '\t' << "Sat" << endl;
    for (int i = 0; i < startingDay - 1; i++){
        if (startingDay <= 7) {
            cout << '\t';
            finalDay++;
        }
    }
    for (int j = 1; j <= numOfDays; j++){
        if(((finalDay % 7) == 1) && j > 1){
            cout << endl;
        }
        cout << j << '\t';

        finalDay++;
    }
    cout << endl << endl;
    finalDay--; /*I had to add a lot of esoteric logic and arithmetic to ensure
                 that the return int matches assignment specification, all while still operating correctly.*/
    if ((finalDay % 7) == 0){
        return 7;
    }
    else {
        return finalDay % 7;
    }
}

int print_year_calender(int year, int startingDay){
    int lastDay = 0;
    bool leapYear = false;
    leapYear = is_leap_year(year);
    cout << "\t January " << year << endl;
    lastDay = print_month_calender(31, startingDay);
    cout << "\t February " << year << endl;
    if (leapYear){
        lastDay = print_month_calender(29, lastDay + 1);
    }
    else {
        lastDay = print_month_calender(28, lastDay + 1);
    }
    for (int i = 3; i <= 12; i++){
        switch (i){// Not ideal using switches in loops, but we need different behavior for each month.
            case 3:
                cout << "\t March " << year << endl;
                lastDay = print_month_calender(31, lastDay + 1);
                break;
            case 4:
                cout << "\t April " << year << endl;
                lastDay = print_month_calender(30, lastDay + 1);
                break;
            case 5:
                cout << "\t May  " << year << endl;
                lastDay = print_month_calender(31, lastDay + 1);
                break;
            case 6:
                cout << "\t June " << year << endl;
                lastDay = print_month_calender(30, lastDay + 1);
                break;
            case 7:
                cout << "\t July " << year << endl;
                lastDay = print_month_calender(31, lastDay + 1);
                break;
            case 8:
                cout << "\t August " << year << endl;
                //We could alternate odd/even loop cycles if July & August didn't both have 31 days.
                lastDay = print_month_calender(31, lastDay + 1);
                break;
            case 9:
                cout << "\t September " << year << endl;
                lastDay = print_month_calender(30, lastDay + 1);
                break;
            case 10:
                cout << "\t October " << year << endl;
                lastDay = print_month_calender(31, lastDay + 1);
                break;
            case 11:
                cout << "\t November " << year << endl;
                lastDay = print_month_calender(30, lastDay + 1);
                break;
            case 12:
                cout << "\t December " << year << endl;
                lastDay = print_month_calender(31, lastDay + 1);
                break;
        }
    }
    return  lastDay + 1; // First day of next year
}
