#include <iostream>
using namespace std;

class numbers
{
    int a,b;
    public:
    void getdata();
    friend void avg(numbers);
};

void numbers :: getdata()
{
    cout << "Enter value of a and b  ";
    cin >> a >>b;
}

void avg(numbers x)
{
    cout << "Avg of " <<x.a <<" and " <<x.b <<" = " <<(float)(x.a+x.b)/2;
}

int main()
{
    numbers a;
    a.getdata();
    avg(a);
    return 0;
}