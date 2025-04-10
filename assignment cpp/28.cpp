#include <iostream>
using namespace std;

class add
{
    public :
    string x;
    add(string y)
    {
        x= y;
    }
    public:
    string operator+(add a)
    {
        return (x+a.x);
    }
    int operator<(add a)
    {
        return (x<a.x);
    }
    int operator>(add a)
    {
        return (x>a.x);
    }
};

int main()
{
    add a("Hiresh");
    add b(" Goyal");
    string name = a+b;
    int x,y;
    x = a<b;
    y = a>b;
    cout << x <<endl;
    cout << y <<endl;
    cout << name;
}