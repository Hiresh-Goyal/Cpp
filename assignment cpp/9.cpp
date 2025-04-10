#include <iostream>
using namespace std;
int main()
{
    int n,c;
    cout<< "Enter the value of n\n";
    cin>>n;
    cout <<"Prime numbers in the given range are :-\n";
    for(int i =2;i<n;i++)
    {
        for(int j=1;j<i;j++)
        if(i%j==0)
        c++;
        if(c==1)
        cout<< i <<"\n";
        c=0;
    }
}