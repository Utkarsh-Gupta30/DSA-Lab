#include<iostream>
#include<vector>
using namespace std;

class quickSort
{
    public:
    void input(vector<int> &arr);
    void sort(vector<int> &arr, int st, int end);
    int partition(vector<int> &arr, int st, int end);
    void display(vector<int> arr);
};

void quickSort::input(vector<int> &arr)
{
    int size;
    
    cout<<"Enter your number of elements in array : ";
    cin>>size;

    arr.resize(size);

    cout<<"Enter your "<<size<<" elements in array : \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr.at(i);
    }
}

int quickSort::partition(vector<int> &arr, int st, int end)
{
    int indx = st-1, pvt = end;
    for(int i=st; i<end; i++)
    {
        if(arr.at(i) < arr.at(pvt))
        {
            indx++;
            swap(arr.at(i), arr.at(indx));
        }
    }
    indx++;
    swap(arr.at(pvt), arr.at(indx));

    return indx;
}

void quickSort::sort(vector<int> &arr, int st, int end)
{
    if(st < end)
    {
        int pvtIndx = partition(arr, st, end);
        sort(arr, st, pvtIndx-1);
        sort(arr, pvtIndx+1, end);
    }
}

void quickSort::display(vector<int> arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
    }
}

int main()
{
    vector<int> arr;
    quickSort QS;

    QS.input(arr);
    QS.sort(arr, 0, arr.size()-1);
    QS.display(arr);

    return 0;
}