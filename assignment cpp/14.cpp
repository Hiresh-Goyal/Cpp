#include <iostream>
using namespace std;

void swap(double arr[],int j)
{
    double c=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=c;
}

void swap(double arr[],int i,int j)
{
    double c=arr[j];
    arr[j]=arr[i];
    arr[i]=c;
}

void printarr(double arr[],int n)
{
    for(int i = 0; i<n ;i++)
    {
        cout << arr[i];
    }
}

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


    int choice;
    cout<< "Enter 1 to sort using bubble sort\nEnter 2 to sort using selection sort\n";
    cin>> choice;

    if(choice == 1)
    {
        // BUBBLE SORT  
        for(int i =0;i<n-1;i++)
        {
            int a=0;
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    a=1;
                    swap(arr,j);
                }
            }
            if(a==0)
            break;
        }
    }

    else if (choice==2)
    {

        //Selection Sort

        for(int i=0;i<n-1;i++)
        {
            int smallIndex = i;
            for(int j=i;j<n;j++)
            {
                if(arr[smallIndex] > arr[j])
                smallIndex=j;
            }
            swap(arr,i,smallIndex);
        }
    }
    else
    {
        cout<<"Wrong Input hence aray is still unsorted\n";
    }

    printarr(arr,n);
    return 0;
}