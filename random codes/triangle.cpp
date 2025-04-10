#include <iostream>
using namespace std;
class triangle
{
    float a,b,c;
    public :
    void get_data();
    void check();
};

void triangle :: get_data()
{
    cout << "Enter length of side a\n";
    cin >> a;
    cout << "Enter length of side b\n";
    cin >> b;
    cout << "Enter length of side c\n";
    cin >> c;
}

void triangle :: check()
{
    if((a==b) and (b==c))
    cout << "Equilateral Triangle";
    else if((a==b) or (b==c) or (c==a))
    cout << "Isocelles Triangle";
    else
    cout << "Scalene Traingle";
}

int main()
{
    triangle x;
    x.get_data();
    x.check();
    return 0;
}