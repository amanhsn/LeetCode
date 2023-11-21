#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1, 6, 4, 3, 0, 7, 8, 4, 3, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    insertionSort(arr, length);

    cout << "\nSorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}