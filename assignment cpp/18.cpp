#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter the number of numbers in array\n";
    cin >> n;
    double arr[n],narr[n+1];
    cout<< "Enter the numbers\n";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<< "enter the value of k\n";
    cin>>k;
    if(k>n)
    {
        cout<< "Wrong Input";
        return 0;
    }

    double v;
    cout << "Enter the number you want to insert at k'th position\n";
    cin>>v;

    narr[k]=v;
    for(int i=0;i<n+1;i++)
    {
        if(i<k)
        narr[i] =arr[i];
        else if(i>k)
        narr[i]=arr[i-1];
    }

    cout << "The new array is = \n";
    for(int i =0;i<n+1;i++)
    {
        cout << narr[i] << " ";
    }
    return 0;
}