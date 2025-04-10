#include <iostream>
using namespace std;
class cart
{
    int number;
    float cost;
    public:
    cart(int,float);
    void put_data();
};

cart :: cart(int num, float cos)
{
        number=num;
        cost = cos;
}
void cart :: put_data()
{
        cout << "number of item is : " <<number;
        cout << "\nCost of item is : " <<cost;
}

int main()
{
    int num;
    float cos;
    cout << "Enter number of item  ";
    cin >> num;
    cout << "Enter cost of item  ";
    cin >> cos;
    cart x(num,cos);
    x.put_data();
    return 0;
}