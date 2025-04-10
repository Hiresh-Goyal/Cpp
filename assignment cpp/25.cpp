#include <iostream>
using namespace std;

class a
{
    private:
    int y =5;
    public :
    int x;
};

class b : public a
{
    public:
    b()
    {
        x =10;
    }
};

class c : public a
{
    public:
    int z=10;
};

class d : public b,public c
{
    public:
    void display()
    {
        cout << z;
    }
};

int main()
{
    d h;
    h.display();
}