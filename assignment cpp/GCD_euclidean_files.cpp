#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the first number\n";
    cin >> a;
    cout << "Enter the second number\n";
    cin >> b;
    ofstream fout;
    fout.open("GCD.txt");
    fout << "The GCD of "<<a <<" and " <<b <<" = ";
    if(b>a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    int r = 5;
    while(r !=0)
    {
        r = a%b;
        a=b;
        b=r;
    }
    fout <<a;
    fout.close();
    return 0;
}