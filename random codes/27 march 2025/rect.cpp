#include <iostream>
using namespace std;

class length
{
    public:
    double l;
    length()
    {
        cout <<"Enter the length of rectangle\n";
        cin>>l;
    }
};

class breadth
{
    public:
    double b;
    breadth()
    {
        cout <<"Enter the breadth of rectangle\n";
        cin>>b;
    }
};

class rectangle : public length, public breadth
{
    public:
    void display()
    {
        cout << "The area of rectangle = " <<l*b;
    }
};

int main()
{
    rectangle a;
    a.display();
    return 0;
}