//WAP to implement selection sort
#include<iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    int minIndex, temp;

    for(int i = 0; i < size - 1; i++) {
        minIndex = i;

        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap only once per pass
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 5, 8, 2, 20, 13, 15, 23, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    return 0;
}
