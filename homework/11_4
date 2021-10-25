#include <iostream>
using namespace std;

int jump_it (int arr[], int size);

int main() {
    int size = 0, jumps = 0;
    int *arr;
    cout << "How many integers? ";
    cin >> size;
    if (size < 2){
        cout << "Invalid size, minimum: 2." << endl;
        return 200;
    }
    arr = new int[size];
    /*
    int arr[6] = {0, 3, 80, 6, 57, 10};
    int size = 6;
    // Shall return: 19
     */

    /*
    int arr[8] = {0, 50, 51, 52, 53, 54, 55, 56};
    int size = 8;
    // Shall return: 212
    */

    /*
    int[8] = {0, 56, 55, 54, 53, 52, 51, 50};
    int size = 8;
    // Shall return: 209
    */

    cout << endl << "Enter positive integers: "; // The first integer MUST be zero.
    for (int i = 0; i < size; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            cout << "Invalid array entry." << endl;
            return (201 + i);
        }
    }
    jumps = jump_it(arr, size);
    cout << jumps;
    delete []arr;
    arr = nullptr;
    return 0;
}

int jump_it (int arr[], int size){
    if ((size) <= 3){ // Last cell, adjacent cell, and jump cell.  Choose Last.
        return arr[size - 1];
    }
    else {
        int adjacent = jump_it(arr, size - 1);
        int jump = jump_it(arr, size - 2);
        if (adjacent >= jump){
        //if((jump_it(arr, size - 1)) >= (jump_it(arr, size - 2))){
            return jump_it(arr,size - 2) + arr[size - 1];
        }
        else {
            return jump_it(arr, size - 1) + arr[size - 1];
        }
    }
}
