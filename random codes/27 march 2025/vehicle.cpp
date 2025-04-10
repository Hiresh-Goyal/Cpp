#include <iostream>
using namespace std;

class vehicle
{
    public:
    string fuelType;
    virtual string FuelType()
    {
       return("unknown");
    }
    void display()
    {
        fuelType = FuelType();
        cout << fuelType;
    }
};

class petrol:public vehicle
{
    public :
    string FuelType() override
    {
        return("Petrol");
    }
};

class electric:public vehicle
{
    public :
    string FuelType() override
    {
        return("Electric");
    }
};

int main()
{
    vehicle *v1 = new petrol();
    vehicle *v2 = new electric();
    cout << "The type of car of v1 = ";
    v1->display();
    cout << "\nThe type of car of v2 = ";
    v2->display();
    return 0;
}