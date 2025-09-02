// Linear search using class and vector
#include <iostream>
#include <vector>
using namespace std;

class linearSearch
{
public:
    void input(vector<int> &arr, int size);
    int search(vector<int> &arr, int size, int key);
};

void linearSearch::input(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr.at(i);
    }
}

int linearSearch::search(vector<int> &arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr.at(i) == key)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr;
    int key, size;

    linearSearch ls;

    cout << "Enter number of element(s): ";
    cin >> size;
    arr.resize(size);

    cout << "Enter your " << size << " element(s): \n";
    ls.input(arr, size);

    cout << "Enter key value: ";
    cin >> key;

    int result = ls.search(arr, size, key);

    if (result == -1)
        cout << "Element not found!";

    else
        cout << "Element found at index: " << result;

    return 0;
}