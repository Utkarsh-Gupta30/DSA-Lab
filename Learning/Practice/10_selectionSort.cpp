//WAP to implement selection sort
#include<iostream>
using namespace std;

int selectionsort(int arr[], int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {4, 5, 8, 2, 20, 13, 15, 23, 1, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, size);
    return 0;
}