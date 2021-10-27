#include <iostream>

const int arraySize = 20;

void min_in_array(int nums[], int numSize);

int main() {
    using namespace std;
    int integers[arraySize];
    cout << "Please enter " << arraySize << " integers separated by a space: " << endl;
    for (int i = 0; i < arraySize; i++){
        cin >> integers[i];
    }
    cout << endl;
    min_in_array(integers, arraySize);
    return 0;
}

void min_in_array(int nums[], int numSize){
    using namespace std;
    int minimum = 2147483647, indices[numSize], indexRegister = 0;
    for (int i = 0; i < numSize; i++){ //Determine minimum
        if (nums[i] < minimum){
            minimum = nums[i];
        }
    }
    for (int j = 0; j < numSize; j++){ //Index the minimum
        if (nums[j] == minimum){
            indices[indexRegister] = j;
            indexRegister++;
        }
    }
    cout << "The minimum value is " << minimum << ", and it is located at the following indices: ";
    for (int k = 0; k < indexRegister; k++){
        cout << indices[k] << ' ';
    }
    cout << endl;
    return; //This could have returned the minimum as an int, but not used outside of subroutine.
}
