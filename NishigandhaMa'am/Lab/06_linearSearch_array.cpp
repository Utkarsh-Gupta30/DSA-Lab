// Lab-1: Implementation of various searching and sorting methods

// WAP to perform linear search on an given array
#include<iostream>
using namespace std;

int search(int arr[], int key)
{
    for(int i=0; i<4; i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    int key, arr[]={8,7,6,5};
    cout<<"Enter key value: ";
    cin>>key;
    cout<<"Index: "<<search(arr, key);
    return 0;
}