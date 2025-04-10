#include <iostream>
using namespace std;
class cart
{
    char name[100];
    float cost;
    public:
    void get_data();
    void put_data();
};

void cart :: get_data()
{
        cout << "Enter name of item  ";
        cin >> name;
        cout << "Enter cost of item  ";
        cin >> cost;
}
void cart :: put_data()
{
        cout << "Name of item is : " <<name;
        cout << "Cost of item is : " <<cost;
}

int main()
{
    int n;
    cout << "enetr the number of items to add ";
    cin >> n;
    cart x[n];
    for(int i = 0 ;i < n ;i++)
    {
        cout<< "Item no. : " <<i+1 <<"\n" ;
        x[i].get_data();
    }
    for(int i = 0 ;i < n ;i++)
    {
        cout<< "\nThe details of item no. : " <<i+1 <<"are \n";
        x[i].put_data();
    }
    return 0;
}