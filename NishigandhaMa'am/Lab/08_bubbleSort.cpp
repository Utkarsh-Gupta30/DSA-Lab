//WAP to implement bubble sort
#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[] = {5, 8, 6, 7, 2, 10, 0};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    return 0;
}
