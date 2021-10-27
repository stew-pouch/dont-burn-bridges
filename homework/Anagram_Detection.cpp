/* User is queried to enter two lines of text.  Program returns as output
 * whether or not the two entered lines of text are anagrams.  Results are not
 * case sensitive.  Ignores numbers, spaces, and special characters. */

#include <iostream>
using namespace std;

const int lettersOfAlphabet = 26; //Must reinitialize array values in int arrays if modified.

void count_letter(char strn[], int letter[]);
bool letter_check(int alpha[], int beta[]);

int main() {
    int lettersAlpha[lettersOfAlphabet] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int lettersBeta[lettersOfAlphabet] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char stringAlpha[1024], stringBeta[1024];
    bool isAnagram = false;
    cout << "Please enter the first line of text: " << endl;
    cin.getline(stringAlpha, 1024);
    cout << endl << "Please enter the second line of text: " << endl;
    cin.getline(stringBeta, 1024);
    count_letter(stringAlpha, lettersAlpha);
    count_letter(stringBeta, lettersBeta);
    isAnagram = letter_check(lettersAlpha, lettersBeta);
    if (isAnagram){
        cout << endl << "The two strings are anagrams.  " << endl;
    }
    else {
        cout << endl << "The two strings are not anagrams.  " << endl;
    }
    return 0;
}

void count_letter(char strn[], int letter[]){ //Considering ONLY letters of the alphabet!
    int i = 0;
    while (strn[i] != '\0'){
        if (((int) (strn[i]) >= 65) && ((int) (strn[i]) <= 90)){
            letter[((int) (strn[i] - 65))] += 1;
        }
        else if (((int) (strn[i]) >= 97) && ((int) (strn[i]) <= 122)){
            letter[((int) (strn[i] - 97))] += 1;
        }
        i++;
    }
    return;
}

bool letter_check(int alpha[], int beta[]){
    for (int j = 0; j < lettersOfAlphabet; j++){
        if(alpha[j] != beta[j]){
            return false;
        }
    }
    return true;
}
