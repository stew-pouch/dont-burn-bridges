#include <iostream>
#include <vector>
using namespace std;

vector<int> divide(vector<int> &sorting);
void conquer(vector<int> &toSortNow, vector<int> &lefty, vector<int> &righty);

int main() {
    vector<int> toSort, extremes(2);
    int size = 0;
    cout << "How many numbers? ";
    cin >> size;
    cout << "Please insert " << size << " numbers: " << endl;
    int temp;
    for (int i = 0; i < size; i++){
        cin >> temp;
        toSort.push_back(temp);
    }
    extremes = divide(toSort);
    for (int j = 0; j < size; j++){
        cout << toSort[j] << endl;
    }
    cout << "Minimum: " << extremes[0] << '\t' << "Maximum: " << extremes[1] << endl;
    return 0;
}

vector<int> divide (vector<int> &sorting) {
    vector<int> left, right, minmax(2);

    if (sorting.size() == 1) {
        minmax[0] = sorting[0];
        minmax[1] = sorting[0];
        return minmax;
    }
    else if (sorting.size() == 2) {
        if (sorting[0] <= sorting[1]) {
            minmax[0] = sorting[0];
            minmax[1] = sorting[1];
            return minmax;
        }
        else if (sorting[0] > sorting[1]) {
            int temp;
            temp = sorting[1];
            sorting[1] = sorting[0];
            sorting[0] = temp;
            minmax[0] = sorting[0];
            minmax[1] = sorting[1];
            return minmax;
        }
        else {
            cout << "ERROR: SIZE2 Logic" << endl;
            exit(1);
        }
    }
    else if (sorting.size() < 1) {
        cout << "Invalid sort parameters" << endl;
        exit(200);
    }
    else {
        for (int l = 0; l <= sorting.size() / 2; l++){
            left.push_back(sorting[l]);
        }
        for (int r = (sorting.size() / 2) + 1; r < sorting.size(); r++){
            right.push_back(sorting[r]);
        }
        divide(left);
        divide(right);
        conquer(sorting, left, right);
        minmax[0] = sorting[0];
        minmax[1] = sorting[sorting.size() - 1];
        return minmax;
    }
}

void conquer (vector<int> &toSortNow, vector<int> &left, vector<int> &right){ //
    int l = 0, r = 0, index = 0, lSize = left.size(), rSize = right.size();
    while ((l < lSize) && (r < rSize)){
        if (left[l] <= right[r]){
            toSortNow[index++] = left[l++];
        }
        else if (left[l] > right[r]){
            toSortNow[index++] = right[r++];
        }
    }
    int size = toSortNow.size();
    while ((l < lSize) && (index < size)){
        toSortNow[index++] = left[l++];
    }
    while ((r < rSize) && (index < size)){
        toSortNow[index++] = right[r++];
    }
}
