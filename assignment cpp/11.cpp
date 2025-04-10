#include <iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cout << "Enter a number\n";
    cin>>a;
    for(int i =1;i<a+1;i++)
    fact *= i;
    cout<<"Factorial of number = " <<fact;
}