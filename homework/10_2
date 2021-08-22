#include <iostream>

int* find_missing(int arr[], int n, int& resArrSize);

int main() {
    using namespace std;
    int *arr, *missingValues; //Specified as array, not a vector.
    int arraySize = 0, missingSize = 0;
    cout << "How many numbers? ";
    cin >> arraySize;
    arr = new int[arraySize];
    cout << "Enter " << arraySize << " numbers between 0 and " << arraySize << ": ";
    for (int i = 0; i < arraySize; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            cout << "Invalid input." << endl;
            return 200;
        }
    }
    cout << endl;
    missingValues = find_missing(arr, arraySize, missingSize);
    for (int j = 0; j < missingSize; j++){
        cout << missingValues[j] << ' ';
    }
    delete []arr;
    arr = nullptr;
    delete []missingValues;
    missingValues = nullptr;
    return 0;
}

int* find_missing(int arr[], int n, int& resArrSize){ // Nested loops forbidden.  No recursion...yet.
    bool *present;
    int *missing;
    present = new bool[n + 1];
    for (int set = 0; set <= n + 1; set++){ // Initializes present array.
        present[set] = false;
    }
    missing = new int[n + 1];
    for (int a = 0; a < n; a++){ // See what's there
        present[arr[a]] = true;
    }
    for (int b = 0; b < n + 1; b++){ // Determine what isn't there
        if (!present[b]){
            missing[resArrSize] = b;
            resArrSize++;
        }
    }
    delete []present;
    present = nullptr;
    return missing;
}
