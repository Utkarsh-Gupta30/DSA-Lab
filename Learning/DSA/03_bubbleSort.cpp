#include<iostream>
#include<vector>
using namespace std;

class bubbleSort
{
    public:
    vector<int> arr;
    void input(int n);
    void sort(vector<int>& arr, int n);
    void display(int n);
};

void bubbleSort::input(int n)
{
    arr.resize(n);
    cout<<"Enter your "<<n<<" elements in array : \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr.at(i);
    }
}

void bubbleSort::sort(vector<int>& arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr.at(j)>arr.at(j+1))
            {
                int temp = arr.at(j);
                arr.at(j) = arr.at(j+1);
                arr.at(j+1) = temp;
            }
        }
    }
}

void bubbleSort::display(int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr.at(i)<<" ";
    }
}

int main()
{
    int n;
    bubbleSort bs;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    bs.input(n);
    bs.sort(bs.arr, n);
    bs.display(n);
    return 0;
}