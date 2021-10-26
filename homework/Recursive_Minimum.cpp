#include <iostream>

int minimum_in_array (int arr[], int arrSize);
int minimum_in_range (int arr[], int low, int high);

int main() {
    using namespace std;
    int arr[10] = {-11, 2, 1, -4, -1, 6, 100, 10, 9, 8}; 
    int array1 = 0, range1 = 0, array2 = 0, range2 = 0, cutoff = 2;

    cout << "\t\t Array\t| Range" << endl;
    cout << "Minimum: ";
    array1 = minimum_in_array(arr, 10);
    range1 = minimum_in_range(arr, 0, 9);
    cout << ' ' << array1 << "\t|\t" << range1 << endl; //should both be -11

    cout << "Cutoff:  ";
    array2 = minimum_in_array(arr + cutoff, 4); //arr + x == &(arr[x])
    range2 = minimum_in_range(arr, cutoff, 5);
    cout << ' ' << array2 << "\t|\t" << range2 << endl; //should both be -4

    return 0;
}

int minimum_in_array (int arr[], int arrSize){
    if (arrSize == 1){
        return arr[0];
    }
    else {
        int recurse = minimum_in_array(arr, arrSize - 1);
        if(arr[arrSize - 1] > recurse){
            return recurse;
        }
        else {
            return arr[arrSize - 1];
        }
    }
}

int minimum_in_range (int arr[], int low, int high){
    if (low == high){
        return arr[low];
    }
    else {
        int recurse = minimum_in_range(arr, low, high - 1);
        if(arr[high] > recurse){
            return recurse;
        }
        else {
            return arr[high];
        }
    }
}
