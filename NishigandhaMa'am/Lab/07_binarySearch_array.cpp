// WAP to perform binary search on an given array
#include <iostream>
using namespace std;

int sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;  
        else if (arr[mid] < key)
            low = mid + 1;  
        else
            high = mid - 1; 
    }

    return -1; 
}

int main() {
    int arr[] = {2, 4, 7, 10, 15, 20, 3, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sortArr[] = {sort(arr, size)};
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result == -1)
        cout << "Element not found in the array." << endl;
    else
        cout << "Element found at index: " << result << endl;

    return 0;
}