#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> list;
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    list.resize(num);
    cout << "Enter " << num << " elements: \n";
    for (int i = 0; i < num; i++)
    {
        cin >> list[i];
    }
    for (int i = 0; i < num; i++)
        cout << list.at(i) << " ";
    return 0;
}

// Methods:
// push_back(x)
// pop_back()
// size()
// empty()
// clear()
// insert(index, value)
// erase(index)
// at(i)
// [i]
// swap(v2)
