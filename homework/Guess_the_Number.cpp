#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    using namespace std;
    int guess = 0, remaining = 5, answer = 0, start = 6, low = 1, high = 100;
    start = remaining + 1; // For counting guesses.
    bool correct = false;
    srand(time(0));
    answer = (rand() % 100) + 1;
    cout << "I thought of a number between 1 and 100! Try to guess it.  " << endl;
    while ((remaining > 0) && (correct == false)){
        cout << "Range: [" << low << ", " << high << "], Number of guesses left: " << remaining << endl
        << "Your guess: ";
        cin >> guess;

        if ((guess <= low) || (guess > high)) { //I can't wait to find out how to catch wrong input type.
            cout << endl << "Please enter an integer between " << low << " and " << high << '.' << endl;
        }
        else if (guess == answer){
            correct = true;
            cout << "Congrats!  You guessed my number in ";
            if (remaining == 5){
                cout << "1 guess.  " << endl;
            }
            else {
                cout << start - remaining << " guesses.  " << endl << endl;
            }
        }
        else if ((guess > answer) && (remaining > 1)){
            cout <<  "Wrong! My number is smaller.  " << endl << endl;
            high = guess - 1;
            remaining--;
        }
        else if ((guess < answer) && (remaining > 1)) {
            cout << "Wrong! My number is bigger.  " << endl << endl;
            low = guess + 1;
            remaining--;
        }
        else if ((guess != answer) && (remaining == 1)) {
            cout << "Out of guesses! My number is " << answer << endl << endl;
            remaining--;
        }
    }
    return 0;
}
