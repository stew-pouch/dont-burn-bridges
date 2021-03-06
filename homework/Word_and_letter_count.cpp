/* User is queried for a line of text.  Program returns as output the amount
 * words in the entered text, as well the count of each alphabetical letter. 
 * Program ignores numbers and special characters. */

#include <iostream>

void count_letters(char line[], int letters[], int &words); //Reads for sentinel input '\0' instead of determining taking length.
void print_count(int letters[], int words);

int main() {
    using namespace std;
    int letterCount[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int wordCount = 0;
    char input[1024];
    cout << "Please enter a line of text: " << endl;
    cin.getline(input, 1024); //Use caution: does not sanitize input against profanity.
    count_letters(input, letterCount, wordCount);
    print_count(letterCount, wordCount);
    return 0;
}

void count_letters(char line[], int letters[], int &words){
    int index = 0;
    while (line[index] != '\0'){
        if (((int) (line[index]) >= 65) && ((int) (line[index]) <= 90)){
            letters[((int) (line[index] - 65))] += 1;
        }
        else if (((int) (line[index]) >= 97) && ((int) (line[index]) <= 122)){
            letters[((int) (line[index] - 97))] += 1;
        }
        else if (((line[index]) == ' ') || ((line[index]) == ',') || ((line[index]) == '.')
        || ((line[index]) == '\n' )|| ((line[index]) == '\t')){
            words++;
        }
        index++;
    }
    index--; //Count the final word in the absence of a proper break.
    if (((line[index]) != ' ') && ((line[index]) != ',') && ((line[index]) != '.')
    && ((line[index]) != '\n' ) && ((line[index]) != '\t')){
        words++;
    }
    return;
}

void print_count(int letters[], int words){
    using namespace std;
    cout << endl << words << '\t' << "words" << endl;
    for (int i = 0; i < 26; i++){
        if (letters[i] != 0){
            cout << letters[i] << '\t' << (char) (i + 97) << endl;
        }
    }
    return;
}
