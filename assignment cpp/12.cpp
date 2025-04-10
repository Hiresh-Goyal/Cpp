#include <iostream>
#include <math.h>
using namespace std;

void binary(int n,int a,int sum)
{
    if(n>pow(2,a)-1)
    {
        n = n-pow(2,a);
        sum = sum*10+1;
    }
    else
    {
        sum *= 10;
    }
    if(a>0)
    {
        binary(n,a-1,sum);
    }
    else
    {
        cout<<sum;
    }
}

int main()
{
    int n,a,sum=0;
    cout << "Enter a number\n";
    cin>>n;
    for(int i=1;;i++)
    {
        if(pow(2,i)>n)
        {
            a= i-1;
            break;
        }
    }
    binary(n,a,sum);
    return 0;
}