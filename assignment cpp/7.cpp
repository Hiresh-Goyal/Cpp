#include <iostream>
using namespace std;
int main()
{
    int a,rev=0;
    cout << "Enter a number\n";
    cin>>a;
    while(a>0)
    {
        int x =a%10;
        rev= rev*10 + x;
        a= a/10;
    }
    cout << "The reverse of a number = " <<rev;
}