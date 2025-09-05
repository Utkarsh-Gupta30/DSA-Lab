#include<iostream>
#include<vector>
using namespace std;

class selectionSort
{
    private:
    vector<int> arr;
    public:
    void input(int size);
    void sort(int size);
    void display(int size);
};

void selectionSort::input(int size)
{
    arr.resize(size);
    cout<<"Enter your "<<size<<" elements in array : \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr.at(i);
    }
}

void selectionSort::sort(int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr.at(min) > arr.at(j))
            {
                min = j;
            }
        }
        swap(arr.at(i), arr.at(min));
    }
}

void selectionSort::display(int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr.at(i)<<" ";
    }
}

int main()
{
    int size;
    selectionSort SS;

    cout<<"Enter number of elements in array : ";
    cin>>size;
    
    if(size == 0)
    {
        return 0;
    }

    SS.input(size);
    SS.sort(size);
    SS.display(size);

    return 0;
}