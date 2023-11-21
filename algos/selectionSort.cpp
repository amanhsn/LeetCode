#include <iostream>
using namespace std;

void selectionSort(int a[], int length){
    int temp;
    for(int i = 0; i < length - 1; i++){
        int min = i;
        for(int j = i + 1; j < length; j++){
                if(a[j] < a[min]){
                    min = j;
                }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main(){
    int arr[10] = {1, 6, 4, 3, 0, 7, 8, 4, 3, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, length);

    cout << "\nSorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}