#include <iostream>
using namespace std;

class complex
{
    int x,y;
    public :
    complex(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    complex operator+(complex a)
    {
        return complex(x+a.x,y+a.y);
    }
    void display()
    {
        cout << "x = " <<x;
        cout << "\ny = " <<y;
    }
};
int main()
{   
    int a,b;
    cout << "Enter the value of x\n";
    cin >> a;
    cout << "Enter the value of y\n";
    cin >> b;
    complex d(a,b);
    cout << "Enter the value of x\n";
    cin >> a;
    cout << "Enter the value of y\n";
    cin >> b;
    complex e(a,b);
    complex f = d+e;
    f.display();
}