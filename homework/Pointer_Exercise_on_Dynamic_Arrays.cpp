/* User is queried for an amount of integers, and then prompted to specify
 * integers of entered amount.  The program will return as output all of the
 * integers entered that are greater than zero.  The program performs this
 * output operation 4 times, executed 4 different ways in code.
 * Method 4 was obnoxious to implement. */

#include <iostream>

int* get_pos_nums1(const int *arr, int arrSize, int &outPosArrSize);
int* get_pos_nums2(const int *arr, int arrSize, int *outPosArrSizePtr);
void get_pos_nums3(const int *arr, int arrSize, int *&outPosArr, int &outPosArrSize);
void get_pos_nums4(const int *arr, int arrSize, int **outPosArrPtr, int *outPosArrSizePtr);

int main() {
    using namespace std;
    int testNumbers[] = {3, -1, -3, 0, 6, 4};
    int testSize = 6, outArrSize1 = 0, positionSize3 = 0;
    int *result1, *result2, *outArrSize2, *positionArr3;
    int *arraySizePtr4, **arrayPtr4 = &arraySizePtr4;

    /* // Section 4 does NOT work with dynamic arrays for some reason
     * // Use a hard-coded array.
    int *dynamicNum,  inArrSize = 0;
    cout << "Enter amount of integers to filter: ";
    cin >> inArrSize;
    dynamicNum = new int[inArrSize];
    cout << "Enter integer values: ";
    for (int i = 0; i < inArrSize; i++){
        cin >> dynamicNum[i];
    }
    */ // TODO: Find out someday why this won't work.


    result1 = get_pos_nums1(testNumbers, testSize, outArrSize1);
    cout << endl << "Function 1: ";
    for (int i = 0; i < outArrSize1; i++){
        cout << result1[i] << ' ';
    }
    delete []result1;
    result1 = nullptr;
    // clang tidy calls this a useless statement.  However, this a memory safety operation against a rogue pointer.

    outArrSize2 = new int;
    result2 = get_pos_nums2(testNumbers, testSize, outArrSize2);
    cout << endl << "Function 2: ";
    for (int j = 0; j < *outArrSize2; j++){
        cout << result2[j] << ' ';
    }
    delete []result2;
    result2 = nullptr;
    delete outArrSize2;
    outArrSize2 = nullptr;


    get_pos_nums3(testNumbers, testSize, positionArr3, positionSize3);
    cout << endl << "Function 3: ";
    for (int k = 0; k < positionSize3; k++){
        cout << positionArr3[k] << ' ';
    }
    delete []positionArr3;
    positionArr3 = nullptr;

    get_pos_nums4(testNumbers, testSize = 6, arrayPtr4, arraySizePtr4);
    cout << endl << "Function 4: ";
    for (int i = 0; i < *arraySizePtr4;){
        cout << *arrayPtr4[0]++ << ' '; // Don't ask.  I don't know why this works.
        // I tried this on a desperate whim from remembering something a TA said about incrementing pointers.
    }


    return 0;
}


int* get_pos_nums1(const int *arr, int arrSize, int &outPosArrSize){
    int *posArr1;
    int marker = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            outPosArrSize++;
        }
    }
    posArr1 = new int[outPosArrSize];
    for (int j = 0; j < arrSize; j++){
        if (arr[j] > 0){
            posArr1[marker] = arr[j];
            marker++;
        }
    }
    return posArr1;  // TODO: delete this dynamic array after Function 1's output line.
}

int* get_pos_nums2(const int *arr, int arrSize, int *outPosArrSizePtr){
    int *posArr2;
    *outPosArrSizePtr = 0;
    int marker = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            *outPosArrSizePtr += 1;
        }
    }
    posArr2 = new int[*outPosArrSizePtr];
    for (int j = 0; j < arrSize; j++){
        if (arr[j] > 0){
            posArr2[marker] = arr[j];
            marker++;
        }

    }
    return posArr2; // TODO: delete this dynamic array after Function 2's output line.
}

void get_pos_nums3(const int *arr, int arrSize, int *&outPosArr, int &outPosArrSize){
    int marker = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            outPosArrSize++;
        }
    }
    outPosArr = new int[outPosArrSize];
    for (int j = 0; j < arrSize; j++){
        if (arr[j] > 0){
            outPosArr[marker] = arr[j];
            marker++;
        }
    }
    return;
}

void get_pos_nums4(const int *arr, int arrSize, int **outPosArrPtr, int *outPosArrSizePtr){
    int marker = 0;
    int *posArr4;
    int arr4Size = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            arr4Size++;
        }
    }
    posArr4 = new int[arr4Size];
    outPosArrSizePtr = &arr4Size;
    for (int j = 0; j < arrSize; j++){
        if (arr[j] > 0){

            posArr4[marker] = arr[j];
            marker++;
        }
    }
    *outPosArrPtr = posArr4;
    return;
}
