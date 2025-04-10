#include <iostream>
using namespace std;

class circle;
class rectangle
{
    float length,breadth;
    public:
    rectangle();
    friend void area(circle,rectangle);
};

rectangle :: rectangle()
{
    cout << "Enter length  of rectangle  ";
    cin >> length;
    cout << "Enter breadth  of rectangle  ";
    cin >> breadth;
}

class circle
{
    float radius;
    public:
    circle();
    friend void area(circle,rectangle);
};
circle :: circle()
{
    cout << "Enter radius of circle  ";
    cin >> radius;
}


void area(circle x,rectangle y)
{
    float arearect = y.length * y.breadth;
    float areacircle = 3.14 * x.radius * x.radius;
    cout << "Area of circle = " <<areacircle;
    cout << "\nArea of rectangle = " <<arearect;
    if (arearect > areacircle)
    cout << "\nArea of rectangle is greater than area of circle";
    else if (areacircle > arearect)
    cout << "\nArea of circle is greater than area of rectangle";
    else
    cout << "\nBoth areas are equal.";
}

int main()
{
    circle x;
    rectangle y;
    area(x,y);
    return 0;
}