#include<iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
int temp = a;
a = b;
b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
int pivot = arr[high]; // Choosing the last element as pivot
int i = low - 1; // Index of smaller element

for (int j = low; j < high; j++) {
if (arr[j] < pivot) { // If current element is smaller than pivot
i++;
swap(arr[i], arr[j]);
}

}
swap(arr[i + 1], arr[high]); // Place pivot in the correct position
return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
if (low < high) {
int pi = partition(arr, low, high); // Partition index
quickSort(arr, low, pi - 1); // Sort elements before partition
quickSort(arr, pi + 1, high); // Sort elements after partition
}
}

// Function to print the array
void printArray(int arr[], int size) {
for (int i = 0; i < size; i++) {
cout << arr[i] << " ";

}
cout << endl;
}

// Main function
int main() {
int arr[] = {10, 7, 8, 9, 1, 5};
int n = sizeof(arr) / sizeof(arr[0]);

cout << "Original array: ";
printArray(arr, n);

quickSort(arr, 0, n - 1);

cout << "Sorted array: ";
printArray(arr, n);

return 0;
}