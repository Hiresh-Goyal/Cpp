#include <iostream>
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

    int k;
    cout<< "enter the number you want to search for\n";
    cin>>k;


    int choice;
    cout<< "Enter 1 to search using linear search\nEnter 2 to search using binary search\n";
    cin>> choice;


    if(choice == 1)
    {
        //LINEAR SEARCH
        int c=0;
        for(int i=0;i<n;i++)
        {
            
            if(arr[i]== k)
            {
                cout <<"Number exists at index = " <<i;
                c=1;
            }
        }
        if(c==0)
        cout << "Number not found";
    }

    else if(choice == 2)
    {
        //BINARY SEARCH
        int s=0,e=n,c=0;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(arr[mid]==k)
            {
                cout <<"Number exists at index = " <<mid;
                c++;
                break;
            }
            else if(arr[mid]>k)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        if(c==0)
        {
            cout << "Number not found";
        }
    }
    else
    {
        cout<<"Wrong Input\n";
    }
    return 0;
};