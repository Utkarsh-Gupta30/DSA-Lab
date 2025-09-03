#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n, key;
    bool found = false;

    // Taking number of elements in array
    cout << "Enter number of elements in array: ";
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Taking key value
    cout << "Enter value to find index: ";
    cin >> key;

    // Printing array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Finding key value index
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "\nIndex: " << i;
            found = true;
        }
    }
    if (!found)
        cout << "\nNot found !";

    return 0;
}