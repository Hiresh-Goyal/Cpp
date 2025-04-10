#include <iostream>
using namespace std;
class item 
{
    int number;
    float cost;
    public :
    void getdata()
    {
        cout << "Enter the number of item bought ";
        cin >> number;
        cout << "Enter the cost of item bought ";
        cin >> cost;
    }
    void putdata()
    {
        cout << "The number of item bought is " <<number ;
        cout << "\nThe cost of item bought is " <<cost;
    }
};
int main()
{
    item x;
    x.getdata();
    x.putdata();
    return 0;
}