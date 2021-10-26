#include <iostream>


int sum_of_squares(int arr[], int arrSize);
bool is_sorted(int arr[], int arrSize);

int main() {
    using namespace std;
    int *sumColumn = nullptr, sumSize = 0, sum = 0;
    bool isAscending = false;
    cout << "How many integers? ";
    cin >> sumSize;
    sumColumn = new int[sumSize];
    cout << endl << "Please provide " << sumSize << " integers: ";
    for (int i = 0; i < sumSize; i++){
        cin >> sumColumn[i];
    }
    cout << endl << "Sum of squares: ";
    sum = sum_of_squares(sumColumn, sumSize);
    cout << sum << endl;

    cout << endl << "Sorted? ";
    isAscending = is_sorted(sumColumn, sumSize);
    if (isAscending){
        cout << "The elements are sorted." << endl;
    }
    else {
        cout << "The elements are not sorted.  " << endl;
    }
    delete []sumColumn;
    sumColumn = nullptr;
    return 0;
}

int sum_of_squares(int arr[], int arrSize){
    if (arrSize == 1){
        return (arr[arrSize - 1] * arr[arrSize - 1]);
    }
    else {
        return (sum_of_squares(arr, arrSize - 1) + (arr[arrSize - 1] * arr[arrSize - 1]));
    }
}

bool is_sorted(int arr[], int arrSize){
    if (arrSize == 1){
        return true;
    }
    else if (arrSize <= 0){
        std::cout << "Invalid array size." << std::endl;
        return false;
    }
    else if (arrSize == 2){
        if (arr[arrSize - 1] >= arr[arrSize - 2]){
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if (arr[arrSize - 1] >= arr[arrSize - 2]){
            return (is_sorted(arr, arrSize - 1));
        }
        else {
            return false;
        }
    }
}
