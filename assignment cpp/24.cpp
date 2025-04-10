#include <iostream>
using namespace std;

class abc
{
    int a;
    public:
    abc(int b)
    {
        cout << "I am a constructor\n";
        a=b;
    }
    abc(abc &c)
    {
        this ->a = c.a;
    }
    void display()
    {
        cout << "A = " <<a;
    }
    ~abc()
    {
        cout << "I am THE DESTRUCTOR\n";
    }
};

int main()
{
    abc f(20);
    abc g(f);
    g.display();
}