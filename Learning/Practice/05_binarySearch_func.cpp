#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> arr)
{
    int temp;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr.at(i) << " ";
    cout << endl;

}
void search(vector<int> arr, int key)
{
    bool found = false;
    int n = arr.size();
    int mid = n/2;

    while (!found)
    {
        if(mid == mid+1)
        {
            if(arr[mid]==key)
            {
                cout<<"Index: "<<mid;
            }
            else if(arr[mid+1]==key)
            {
                cout<<"Index: "<<mid+1;
            }
        }
        else if(arr[mid] == key)
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
}

int main()
{
    vector<int> arr, v2;
    int n, key;

    // Taking number of elements in array
    cout << "Enter number of elements in array: ";
    cin >> n;
    arr.resize(n);
    arr.resize(n);
    cout << "Enter your " << n << " elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Taking key value
    cout << "Enter value to find index: ";
    cin >> key;

    for(int i=0; i<n; i++)
    v2[i] = arr[i];
    // sort(arr);
    // for(int i=0; i<n; i++)
    // cout<<arr[i]<<" ";
    search(v2, key);
}