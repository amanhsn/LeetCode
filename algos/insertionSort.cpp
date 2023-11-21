#include <iostream>
using namespace std;

void insertionSort(int arr[], int length){
    int key;
    for(int i = 1; i < length -1; i++){
        key = arr[i];
        int j = i - 1;
        while( j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
    }

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