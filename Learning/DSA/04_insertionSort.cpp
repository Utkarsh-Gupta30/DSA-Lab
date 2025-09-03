#include<iostream>
#include<vector>
using namespace std;

class insertionSort
{
    public:
    vector<int> arr;
    void input(int size);
    void sort(int size);
    void display(int size);
};

void insertionSort::input(int size)
{
    arr.resize(size);
    cout<<"Enter your elements in array : \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr.at(i);
    }
}

void insertionSort::sort(int size)
{
    for(int i=0; i<size-1; i++)
    {
        if(arr.at(i) > arr.at(i+1))
        {
            for(int j=i+1; j>0; j--)
            {
                if(arr.at(j) < arr.at(j-1))
                {
                    swap(arr.at(j), arr.at(j-1));
                }
            }
        }
    }
}

void insertionSort::display(int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr.at(i)<<" ";
    }
}

int main()
{
    int size;
    insertionSort IS;

    cout<<"Enter your number of elements in array: ";
    cin>>size;

    IS.input(size);
    IS.sort(size);
    IS.display(size);
    
    return 0;
}
