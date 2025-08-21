//WAP to implement insertion sort
#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    int key, sle;

    for(int i = 1; i < size; i++) {
        key = arr[i];
        sle = i - 1;

        while(sle >= 0 && arr[sle] > key) {
            arr[sle + 1] = arr[sle];
            sle = sle - 1;
        }
        arr[sle + 1] = key;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4, 5, 8, 2, 20, 13, 15, 23, 1, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    return 0;
}
















