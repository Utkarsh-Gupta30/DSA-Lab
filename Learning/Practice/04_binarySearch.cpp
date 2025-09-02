#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n, key, mid;
    bool found = false;

    //Taking number of elements in array 
    cout<<"Enter number of elements in array: ";
    cin>>n;
    arr.resize(n);
    for(int i=0; i<n; i++)
    cin>>arr[i];

    //Taking key value 
    cout<<"Enter value to find index: ";
    cin>>key;

    //Printing array
    for(int i=0; i<n; i++)
    cout<<arr.at(i)<<" ";
    cout<<endl;

    //Setting mid
    mid = n/2;

    while (!found)
    {
        if(arr[mid] == key)
        {
            cout<<"Index: "<<n<<endl;
            found = true;
        }
        else if(arr[mid] > key)
        {
            mid = mid/2;
        }
        else
        {
            mid = (n-mid)/2;
        }
    }
    if(!found)
    cout<<"Not found !";
    return 0;
}