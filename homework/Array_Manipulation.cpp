#include <iostream>
using namespace std;

void print_array(int arr[], int arrSize);
void reverse_array(int arr[], int arrSize);
void remove_odd(int arr[], int& arrSize);
void split_parity(int arr[],int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverse_array(arr1, arr1Size);
    print_array(arr1, arr1Size);
    remove_odd(arr2, arr2Size);
    print_array(arr2, arr2Size);
    split_parity(arr3, arr3Size);
    print_array(arr3, arr3Size);
    return 0;
}

void print_array(int arr[], int arrSize){
    int i; // Helper subroutine to display the contents of an input array.
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void reverse_array(int arr[], int arrSize){
    int swap = 0; // Reverses the order of elements in an array of input.
    for (int i = 0; i < (arrSize / 2); i++){
        swap = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = arr[i];
        arr[i] = swap;
    }
    return;
}

void remove_odd(int arr[], int& arrSize){
    int swap = 0, removal = 0; // Removes all array elements that are not divisible by 2.
    for (int i = 0; i < arrSize; i++){
        if ((arr[i] % 2) == 1) {
            if (swap == 0){
                arr[i] = arr[i + 1];
            }
            else {
                arr[i] = swap;
                swap = 0;
            }
            removal++;
        }
        else {
            swap = arr[i];
        }
    }
    for (int j = 0; j <= removal; j++){
        arr[j] = arr[(j * 2)];
    }
    arrSize -= removal;
    return;
}

void split_parity(int arr[],int arrSize){ // Shadow arrays forbidden.
    // Reorders all array elements such that odd elements are of lower index and even elements are of higher index.
    int hold = -1, holdIndex = -1;
    for (int i = 0; i < arrSize; i++){
        if ((arr[i] % 2) == 0 && (holdIndex < 0)){ // Don't enter if an even has been flagged.
            hold = arr[i];
            holdIndex = i;
        }
        else if (((arr[i] % 2) == 1) && (holdIndex > 0)){ // If an even hasn't been flagged, don't enter.
            arr[holdIndex] = arr[i];
            arr[i] = hold;
            holdIndex = -1;
        }
    }
    return;
}
