#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Money
{
public:
    Money(); // Start with $0.00
    Money(long dollars, int cents); //dollars can be negative, cents cannot.
    // explicit Money(long dollars); // Deprecated
    explicit Money(double dollarsAndCents); // Possibly redundant, easy enough to accommodate.

    double get_money() const;

    friend Money operator +(const Money& amt1, const Money& amt2); //Adds two values.
    friend Money operator -(const Money& amt1, const Money& amt2); // Removes rhs amount from lhs value
    friend bool operator ==(const Money& amt1, const Money& amt2); // True if equivalent.
    friend bool operator >(const Money& amt1, const Money& amt2);
    friend bool operator <(const Money& amt1, const Money& amt2);
    friend Money operator -(const Money& amt1); // Negates present value.
    friend Money operator *(const Money& amt1, double multiply);
    friend Money operator /(const Money& amt1, double quotient);
    friend istream& operator >>(istream& insertion, Money& amt);
    friend ostream& operator <<(ostream& outsource, Money& amt);
    // No destructor: no dynamic data types, no allocated memory
    // No copy constructor: no dynamic data or pointers
private:
    long all_cents; // Implementation: all *money* shall be in cents, and convert to $0.00 as needed.
};

class check // Does not make use of inheritance.
{
public:
    // Interface: all input and output must be in $0.00 form
    check (int num, Money amt, char cashed[]);
    //check (); No default constructor
    int get_number() const;
    double get_amount() const;
    bool get_ifCashed() const;
    Money get_Money() const;
    void set_number(int num); // Check must have value greater than zero.
    void set_amount(double amt);
    void set_ifCashed(bool cashed);
private:
    int checkNumber;
    double checkAmount;
    bool checkCashed;
    Money dollars;
};

void printChecks (const vector<check>& cheque, bool cashed);

int main() {
    int checkCount = 0, numCatcher = 0;
    Money amtCatcher;
    char cashedCatcher[] = "hi";  // Must be filled.
    Money oldBalance(0.00), newBalance(0.00), deposits(0.00), cashed(0.00);
    vector<check> business;
    // vector<Money> deposits;
    cout << "Good Morning! Remind me what your old balance is, please: " << endl;
    cin >> oldBalance;
    cout << "Give me your check number, followed by the number value of the check, and then if the "
            "check has been cashed (Y/N)" << endl;
    while (numCatcher >= 0){
        cin >> numCatcher;
        if (numCatcher < 1){
            break;
        }
        cin >> amtCatcher;
        cin >> cashedCatcher;
        if (numCatcher > 0) {
            business.emplace_back(numCatcher, amtCatcher, cashedCatcher); // Does not compile with push_back.
            checkCount++; // May not need
            //newBalance += a
            deposits = deposits + business[business.size() - 1].get_Money();
            if (business[business.size() - 1].get_ifCashed()){
                cashed = cashed + business[business.size() - 1].get_Money();
            }
            }
        cout << "Please enter -1 to escape, or else continue to enter another check given by number,"
                " value, status." << endl;
    }
    newBalance = oldBalance + deposits;
    Money bankStatement = oldBalance + cashed;

    cout << endl << "Total of checks cashed: " << cashed << endl;  // Sum of cashed checks
    cout << "Total of the deposits: " << deposits << endl; // Sum of ALL checks
    cout << "Your balance after all checks are cashed: " << newBalance << endl; // newBalance = oldBalance + ALL checks
    cout << "What the bank thinks: " << bankStatement << endl << endl; // oldBalance + CASHED checks

    cout << "Checks cashed: " << endl;
    printChecks(business, true);
    cout << "Checks not yet cashed: " << endl;
    printChecks(business, false);
    return 0;
}

void printChecks (const vector<check>& cheque, bool cashed){
    int length = cheque.size();
    Money account;
    for (int i = 0; i < length; i++){
        if (cheque[i].get_ifCashed() == cashed){
            cout << "Check #" << cheque[i].get_number() << ": ";
            account = cheque[i].get_Money();
            cout << account << endl; // This code here WILL NOT let me print Money class from the check.
            // cout << cheque[i].get_Money() << endl;
            // Money ostream not working here, would likely be fixed if check was a class inherited from money.
        }
    }
    return;
}

/******************************************************
 * CHECK-CLASS MEMBER FUNCTIONS
 ******************************************************/
check::check (int num, Money amt, char cashed[]){
    if ((num < 0)){
        cout << "Invalid input for check:NUMBER initialization.  " << endl;
        exit(200); // I use 2XX exit codes for program faults caused by bad input.
    }
    bool ifCashed;
    if ((strcasecmp("y", cashed) == 0)||(strcasecmp("yes", cashed) == 0)){
        ifCashed = true;
    }
    else if ((strcasecmp("n", cashed) == 0)||(strcasecmp("no", cashed) == 0)){
        ifCashed = false;
    }
    else{
        cout << "Invalid check:CASHED initialization." << endl;
        exit(201);
    }
    checkNumber = num;
    dollars = amt;
    checkCashed = ifCashed;
    checkAmount = dollars.get_money();
}

// check::check () : checkNumber(0), checkAmount (0.00), checkCashed(false), dollars(0.00){}
// No check should be created uninitialized, thus no default constructor.

int check::get_number() const {
    return checkNumber;
}

double check::get_amount() const {
    return checkAmount;
}

bool check::get_ifCashed() const {
    return checkCashed;
}

Money check::get_Money() const {
    return dollars;
}

void check::set_number(int num){
    if (num < 0 || isalpha(num)){
        cout << "check_mutate:set_num Invalid check number." << endl;
        exit(202);
    }
    else {
        checkNumber = num;
    }
    return;
}

void check::set_amount(double amt){
    checkAmount = amt;
    return;
}

void check::set_ifCashed(bool cashed){
    checkCashed = cashed;
    return;
}

/**********************************************
 * MONEY-CLASS FUNCTIONS
 * ********************************************/

// *********Money Constructors*******
Money::Money():all_cents(0){}

Money::Money(long dollars, int cents){
    if ((dollars * cents) < 0){
        cout << "Use negative values for both dollars and cents." << endl;
        exit(203);
    }
    all_cents = (100 * dollars) + cents;
}
// Money::Money(long dollars):all_cents(dollars * 100){} // Redundant

Money::Money(double dollarsAndCents){
    long temp;
    temp = dollarsAndCents * 100;
    all_cents = temp;
}

//Money Accessor
double Money::get_money() const{
    return (all_cents * 0.01);
}

// *********Money Operators*******
Money operator +(const Money& amt1, const Money& amt2){
    Money intermediate;
    intermediate.all_cents = amt1.all_cents + amt2.all_cents;
    return intermediate;
}

Money operator -(const Money& amt1, const Money& amt2){
    Money intermediate;
    intermediate.all_cents = amt1.all_cents - amt2.all_cents;
    return intermediate;
}

bool operator ==(const Money& amt1, const Money& amt2){
    return (amt1.all_cents == amt2.all_cents);
}

bool operator >(const Money& amt1, const Money& amt2){
    return (amt1.all_cents > amt2.all_cents);
}

bool operator <(const Money& amt1, const Money& amt2){
    return (amt1.all_cents < amt2.all_cents);
}

Money operator -(const Money& amt1){
    Money intermediate;
    intermediate.all_cents = -amt1.all_cents;
    return intermediate;
}

Money operator *(const Money& amt1, double multiply){
    Money intermediate;
    intermediate.all_cents = amt1.all_cents * multiply;
    return intermediate;
}

Money operator /(const Money& amt1, double quotient){
    Money intermediate;
    intermediate.all_cents = amt1.all_cents / quotient;
    return intermediate;
}

istream& operator >>(istream& insertion, Money& amt){
    bool negative;
    char index, decimal, dimes, pennies;
    long dollars;
    int cents;
    insertion >> index;
    if (index == '-'){
        negative = true;
        insertion >> index;
    }
    else{
        negative = false;
    }
    insertion >> dollars >> decimal >> dimes >> pennies;
    if (index != '$' || decimal != '.' || !isdigit(dimes) || !isdigit(pennies)){
        cout << "Invalid input for money." << endl;
        exit(205);
    }
    cents = (10 * digittoint(dimes)) + digittoint(pennies);
    amt.all_cents = (100 * dollars) + cents;
    if (negative){
        amt.all_cents = -amt.all_cents;
    }
    return insertion;
}

ostream& operator <<(ostream& outsource, Money& amt){
    long absolute_cents, dollars, cents;
    absolute_cents = labs(amt.all_cents);
    dollars = absolute_cents / 100;
    cents = absolute_cents % 100;

    if (amt.all_cents < 0) {
        outsource << "-$" << dollars << '.';
    }
    else {
        outsource << "$" << dollars << '.';
    }
    if (cents < 10){
        outsource << '0';
    }
    outsource << cents;
    return outsource;
}
