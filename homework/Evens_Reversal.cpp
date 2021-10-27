/* User is queried an amount of integers followed by a sequence of integers.
 * The program returns as output the entered integers, where the even
 * integers have separated from the odd numbers, and reversed in order. */

#include <iostream>
using namespace std;

void odds_keep_evens_flip(int arr[], int arrSize);

int main(void) {
    int arraySize = 0;
    int *numbers;
    cout << "Enter number of numbers: ";
    cin >> arraySize;
    numbers = new int[arraySize];
    cout << endl << "Enter numbers: ";
    for (int i = 0; i < arraySize; i++){
        cin >> numbers[i];
    }
    odds_keep_evens_flip(numbers, arraySize);
    cout << endl;
    for (int l = 0; l < arraySize; l++){
        cout << numbers[l] << ' ';
    }
    return 0;
}

void odds_keep_evens_flip(int arr[], int arrSize){
    int evens[arrSize], oddCount = 0, evenCount = 0, hold = 0, move = 0, odds[arrSize];
    for (int j = 0; j < arrSize; j++){ // Parity topography
        if (abs(arr[j] % 2) == 0){
            evens[j] = 1;  // Holds parity
            evenCount++;
        }
        else if(abs(arr[j] % 2) == 1) {
            odds[oddCount] = arr[j]; // Holds unshifted odds, will take evens later.
            oddCount++;
            evens[j] = 0;
        }

    }
    for (int k = arrSize - 1; k > 0; k--){
        if (evens[k] == 1){
            odds[oddCount] = arr[k];  // Not of j-loop sicne we want to add after parity is established and odds sorted.
            oddCount++;
        }

    }
    for (int l = 0; l < arrSize; l++){
        arr[l] = odds[l];
    }
    return;
}
