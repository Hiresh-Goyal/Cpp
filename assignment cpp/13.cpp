#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout <<"enter the number of numbers in array\n";
    cin >> n;
    double arr[n];
    cout<< "Enter the numbers\n";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    double ma = arr[0],mi=arr[0];
    for(int i =1;i<n;i++)
    {
        ma = max(ma,arr[i]);
        mi=min(mi,arr[i]);
    }
    cout << "The largest number of array is = " <<ma;
    cout << "\nThe smallest number of array is = " <<mi;
    return 0;
}