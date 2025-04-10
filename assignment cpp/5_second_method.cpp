#include <iostream>
// #include <string>
using namespace std;
int main()
{
    string a;
    cout << "Enter a number\n";
    cin>>a;
    int sum = (int)a[0] - (int) '0' +stoll(a)%10;
    cout<<"the sum of first and last digit = " <<sum;
    return 0;
}