/* It is not a good idea to share your password online.  
* This program reads a string entered by the user, 
* and truncates any segment that consists entirely of numbers. */

#include <iostream>
#include <string>

int main() {
    using namespace std;
    int index = 0, currentWord = 0;
    string input;
    bool peskyLetters = false, numerals = false;
    cout << "Please enter a line of text." << endl;
    getline(cin, input);
    while (input[index] != '\0'){
        if (((input[index] <= 'z') && (input[index] >= 'a')) || ((input[index] <= 'Z') && (input[index] >= 'A'))){
            // If this char is a lowercase or uppercase letter...
            peskyLetters = true;
        }
        if ((input[index] <= '9') && (input[index] >= '0')){
            numerals = true;
        }
        if (input[index] == ' '){
            if ((!peskyLetters) && (numerals)){
                for (int n = currentWord; n < index; n++){
                    input[n] = 'x';
                }
            }
            numerals = false; // New word, new checks
            peskyLetters = false;
            currentWord = index + 1;
            // Next char presumed to be the start of new word, else move forward again next loop.
        }
        index++;
    }
    cout << input << endl;
    return 0;
}
