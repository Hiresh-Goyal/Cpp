#include <iostream>
using namespace std;

class date
{
    int date,month,year;
    public:
    void get_date();
    void check();
};

void date :: get_date()
{
    cout << "Enter date : ";
    cin >> date;
    cout << "Enter month : ";
    cin >> month;
    cout << "Enter year : ";
    cin >> year;
}

void date :: check()
{   
    if ((date > 0) and (month > 0) and (year > 0) and (month <13))
    {
        if ((month == 1) or (month == 3) or (month == 5) or (month == 7) or (month == 8) or (month == 10) or (month == 12))
        {
            if((date < 32))
            cout << "date is correct";
            else
            cout << "date is incorrect";
        }
        else if(month == 2)
        {
            if ((year % 4 == 0) and (year %100 == 0) and (year % 400 ==0))
            {
                    if ( date < 30)
                    cout << "date is correct";
                    else
                    cout << "date is incorrect";
            }
            else if (year % 4 ==0)
            {
                if ( date < 30)
                cout << "date is correct";
                else
                cout << "date is incorrect";
            }
            else 
            {
                if(date < 29)
                cout << "date is correct";
                else
                cout << "date is incorrect";
            }
        }
        else
        {
            if(date < 31)
            cout << "date is correct";
            else
            cout << "date is incorrect";
        }
    }
}

int main()
{
    date x;
    x.get_date();
    x.check();
    return 0;
}