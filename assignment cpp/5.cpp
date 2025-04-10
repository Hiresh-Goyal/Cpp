#include <iostream>
using namespace std;
int main()
{
    int a,sum,x;
    cout << "Enter a number\n";
    cin>>a;
    sum = a%10;
    while(a>0)
    {
        x= a%10;
        a=a/10;
    }
    cout<<"the sum of first and last digit = " <<sum+x;
}