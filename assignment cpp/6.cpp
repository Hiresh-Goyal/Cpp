#include <iostream>
using namespace std;
int main()
{
    int a =1,b=1;
    cout <<a <<" " <<b;
    for(int i =0;i<10;i++)
    {
        int c = a+b;
        a=b;
        b=c;
        cout <<" " <<c ;
    }
}
