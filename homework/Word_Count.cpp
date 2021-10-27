/* User is queried for a sentence.  The program returns as output the string of text
 * separated by each word on a new line. */
#include <iostream>
#include <string>
using namespace std;

string* create_words_array(string sentence, int& outWordsArrSize); // requires global namespace std

int main() {
    string sentence, *words;
    int arraySize = 1;
    cout << "Please provide a sentence: " << endl;
    getline(cin, sentence);
    words = create_words_array(sentence, arraySize);
    cout << endl;
    for (int a = 0; a < arraySize; a++){
        cout << words[a] << endl;
    }
    delete []words;
    words = nullptr;
    return 0;
}

string* create_words_array(string sentence, int& outWordsArrSize){
    string *brokenUp;
    int stringSize = 0, position = 0, wordCount = 0;
    stringSize = sentence.length();
    for (int i = 0; i < stringSize; i++){
        if (sentence[i] == ' '){
            outWordsArrSize++;
        }
    }

    if (sentence[stringSize - 1] == ' '){
        outWordsArrSize--;
    }
    if (outWordsArrSize == 1){
        brokenUp = new string[1];
        brokenUp[0] = sentence;
        outWordsArrSize = 1;
        return brokenUp;
    }

    brokenUp = new string[outWordsArrSize];
    for (int j = 0; j < stringSize; j++){
        if (sentence[j] == ' '){
            brokenUp[wordCount] = sentence.substr(position, j - position);
            position = j + 1;
            wordCount++;
        }
    }
    for (int k = stringSize; wordCount < outWordsArrSize; k--){
        if (sentence[k] == ' '){
            brokenUp[outWordsArrSize - 1] = sentence.substr(k + 1, stringSize - k);
            wordCount++;
        }
    }
    return brokenUp;
}
