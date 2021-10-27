/* User is presumed to have set and know their PIN# (default: 86753).  User 
 * is prompted to correlate a sequence of pseudorandom digits against their 
 * decimal value, in regards to their PIN#.  Example: If sequence 
 * [1 3 1 2 3 3 1 3 3 2] is provided to correlate [0 1 2 3 4 5 6 7 8 9], the 
 * user's correct response with a PIN of 86753 would be 31332.  The program 
 * returns 1 on a proper authentication, 0 for a failure to authenticate. */

#include <iostream>
#include <cstdlib>
#include <ctime>

const int pinLength = 5, userPin[pinLength] = {8, 6, 7, 5, 3};

int main() {
    using namespace std;
    srand(time(0));
    int queryNum[10], userAnswer[pinLength];
    char response[pinLength + 1];
    bool correctAnswer = true;
    cout << "Please enter your PIN according to the following mapping:" << endl;
    cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
    cout << "NUM: ";
    for (int i = 0; i < 10; i++){
        queryNum[i] = (rand() % 3) + 1;
        cout << queryNum[i] << ' ';
    }
    cout << endl;
    for (int j = 0; j < pinLength; j++){
        cin >> response[j];
        if ((response[j] < '0') || response[j] > '9'){
            cout << "Invalid input." << endl;
            return 200;
        }
        userAnswer[j] = response[j] - '0';
    }
    for (int k = 0; k < pinLength; k++){
        if (userAnswer[k] != queryNum[userPin[k]]){
            correctAnswer = false;
        }
    }
    if (correctAnswer){
        cout << "Your PIN is correct. " << endl;
    }
    else {
        cout << "Your PIN is NOT correct. " << endl;
    }
    return correctAnswer;
}
