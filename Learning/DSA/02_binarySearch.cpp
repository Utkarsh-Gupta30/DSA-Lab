// Binary search using class and vector
#include <iostream>
#include <vector>
using namespace std;

class binarySearch
{
public:
    void input(vector<int> &arr, int n);
    int search(vector<int> &arr, int n, int key);
};

void binarySearch::input(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr.at(i);
    }
}

int binarySearch::search(vector<int> &arr, int n, int key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr;
    int n, key;

    binarySearch bs;

    cout << "Enter number of element(s): ";
    cin >> n;
    arr.resize(n);

    cout << "Enter your " << n << " element(s): \n";
    bs.input(arr, n);

    cout << "Enter your key value: ";
    cin >> key;

    int result = bs.search(arr, n, key);

    if (result == -1)
        cout << "Element not found!";
    else
        cout << "Element found at index: " << result;

    return 0;
}