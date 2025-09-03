// WAP to perform linear search on an given array
#include <iostream>
#include <vector>
using namespace std;

void linearSearch(vector<int> arr, int key)
{
    int found;

    // Printing array
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    // Finding key value index
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            cout << "\nIndex: " << i;
            found = true;
        }
    }
    if (!found)
        cout << "\nNot found !";
}

int main()
{
    vector<int> arr;
    int key, n;

    // Taking number of elements in array
    cout << "Enter number of elements in array: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter your " << n << " elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Taking key value
    cout << "Enter value to find index: ";
    cin >> key;

    linearSearch(arr, key);

    return 0;
}