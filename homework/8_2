#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string str); // This line requires that a global namespace is declared.

int main() {
    string wordInput = "";
    bool funWord = false;
    cout << "Please enter a word: ";
    cin >> wordInput; //No input validation to protect against profanity.  Use caution.
    funWord = is_palindrome(wordInput);
    if (funWord){
        cout << wordInput << " is a palindrome" << endl;
    }
    else {
        cout << wordInput << " is not a palindrome" << endl;
    }
    return 0;
}

bool is_palindrome(string str) {
    int letters = 0, mirrorPoint = 0;
    //string left = "", right = "";
    string left, right;
    while (str[letters] != '\0') {
        letters++; //A string (or char array) terminates with '\0' in memory, as inherited from C.
    }
    mirrorPoint = letters / 2;
    for (int i = 0; i < mirrorPoint; i++) {
        left[i] = str[i];
        right[i] = str[letters - (i + 1)];
        if(left[i] != right[i]){
            return false;
        }
    }
    return true;
}
