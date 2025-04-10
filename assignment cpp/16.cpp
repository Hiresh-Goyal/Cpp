#include <iostream>
using namespace std;

int main()
{   
    int date,month,year;
    cout << "Enter the date ";
    cin >> date;
    cout << "Enter the month ";
    cin >> month;
    cout << "Enter the year ";
    cin >> year;

    int c=0;
    long day=0;
    if ((date > 0) and (month > 0) and (year > 0) and (month <13))
    {
        if ((month == 1) or (month == 3) or (month == 5) or (month == 7) or (month == 8) or (month == 10) or (month == 12))
        {
            if((date < 32))
            ;
            else
            {
                cout << "date is incorrect";
                c++;
            }
        }
        else if(month == 2)
        {
            if ((year % 4 == 0) and (year %100 == 0) and (year % 400 ==0))
            {
                    if ( date < 30)
                    ;
                    else
                    {
                        cout << "date is incorrect";
                        c++;
                    }
            }
            else if (year % 4 ==0)
            {
                if ( date < 30)
                ;
                else
                {
                    cout << "date is incorrect";
                    c++;
                }
            }
            else 
            {
                if(date < 29)
                ;
                else
                {
                    cout << "date is incorrect";
                    c++;
                }
            }
        }
        else
        {
            if(date < 31)
            ;
            else
            {
                cout << "date is incorrect";
                c++;
            }
        }
    }
    else
    {
        cout << "date is incorrect";
        return 0;
    }

    if(c==0)
    {
        for(int i=1;i<year;i++)
        {
            for (int j=1;j<13;j++)
            {
                if ((j == 1) or (j == 3) or (j == 5) or (j == 7) or (j == 8) or (j == 10) or (j == 12))
                {
                    day+=31;
                }
                else if(j ==2)
                {
                    if (((i % 4 == 0) and (i %100 == 0) and (i % 400 ==0)) or ((i % 4 == 0) and (i %100 != 0)))
                    day+=29;
                    else
                    day+= 28;
                }
                else
                day+=30;
            }
        }

        for(int j=1;j<month;j++)
        {
            if ((j == 1) or (j == 3) or (j == 5) or (j == 7) or (j == 8) or (j == 10) or (j == 12))
                {
                    day+=31;
                }
                else if(j ==2)
                {
                    if (((year % 4 == 0) and (year %100 == 0) and (year % 400 ==0)) or ((year % 4 == 0) and (year %100 != 0)))
                    day+=29;
                    else
                    day+= 28;
                }
                else
                day+=30;
        }
        for(int i=1;i<date;i++)
        day++;
        cout<<"the number of days = " <<day;
    }
    return 0;
}