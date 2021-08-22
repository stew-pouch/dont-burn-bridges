#include <iostream>
#include <vector>

void search_by_dyn_array();
void search_by_vector();

const int sentinelValue = -1;

int main() {
    using namespace std;
    cout << "Version 1: " << endl;
    search_by_dyn_array();
    cout << endl << endl;
    cout << "Version 2: " << endl;
    search_by_vector();
    return 0;
}

void search_by_dyn_array(){
    using namespace std;
    int *num, *answer;
    int catcher = 0, searchValue = 0, numSize = 0, answerCount = 0;
    num = new int[2048]; // 8KB of memory, just in case.....
    // One could argue for the creation of an array resizing subroutine...
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl
    << "End your input by typing " << sentinelValue << ". " << endl;
    do {
        cin >> catcher;
        if (catcher > sentinelValue){
            num[numSize] = catcher;
            numSize++;
        }
    }
    while (catcher > sentinelValue);
    answer = new int[numSize];
    for (int i = 0; i < numSize; i++){ // Initialize result array.
        answer[i] = 0;
    }
    cout << "Please enter a number you want to search.  " << endl;
    cin >> searchValue;

    for (int j = 0; j < numSize; j++){
        if (num[j] == searchValue){
            answer[answerCount] = j;
            answerCount++;
        }
    }
    if ((answerCount > 1)){
        cout << searchValue << " shows in lines ";
        for (int k = 0; k < answerCount - 1; k++){
            cout << answer[k] + 1 << ", ";
        }
        cout << answer[answerCount - 1] + 1 << ".  " << endl;
    }
    else if (answerCount == 1){
        cout << searchValue << " shows in line " << answer[0] + 1 << ".  " << endl;
    }
    else {
        cout << searchValue << " does not appear.  " << endl;
    }
    delete []num;
    num = nullptr;
    delete []answer;
    answer = nullptr;
    return;
}

void search_by_vector(){
    using namespace std;
    int catcher = 0, searchValue = 0, index = 0;
    vector<int> num, answer;
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl
    << "End your input by typing " << sentinelValue << ". " << endl;
    do {
        cin >> catcher;
        if (catcher > sentinelValue){
            num.push_back(catcher);
        }
    }
    while (catcher > sentinelValue);
    cout << "Please enter a number you want to search.  " << endl;
    cin >> searchValue;
    for (int i = 0; i < num.size(); i++){
        if (num[i] == searchValue){
            answer.push_back(i);
            index++;
        }
    }
    if ((index > 1)){
        cout << searchValue << " shows in lines ";
        for (int j = 0; j < index - 1; j++){
            cout << answer[j] + 1 << ", ";
        }
        cout << answer[index - 1] + 1 << ".  " << endl;
    }
    else if (index == 1){
        cout << searchValue << " shows in line " << answer[0] + 1 << ".  " << endl;
    }
    else {
        cout << searchValue << " does not appear.  " << endl;
    }
    return;
}
