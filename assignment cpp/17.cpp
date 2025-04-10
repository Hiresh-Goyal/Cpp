#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows and coloumns\n";
    cin>>n;
    int arr1[n][n],arr2[n][n],arr3[n][n];
    cout << "Enter the elements of first matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr1[i][j];
    }
    cout << "Enter the elements of second matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr2[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
    cout << "The sum of arrays = \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr3[i][j] <<" ";
        cout<<endl;
    }
}