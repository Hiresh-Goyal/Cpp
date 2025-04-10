#include <iostream>
using namespace std;

class abc;

class xyz
{
    int a;
    public:
    void geta();
    friend void avg(xyz,abc);
};

class abc
{
    int b;
    public :
    void getb();
    friend void avg(xyz,abc);
};

void xyz :: geta()
{
    cout << "Enter value of a  ";
    cin >> a ;
}

void abc :: getb()
{
    cout << "Enter value of b  ";
    cin >> b ;
}

void avg(xyz f, abc d)
{
    cout << "Avg of " <<f.a <<" and " <<d.b <<" = " <<(float)(f.a+d.b)/2;
}

int main()
{
    xyz x;
    abc d;
    x.geta();
    d.getb();
    avg(x,d);
    return 0;
}