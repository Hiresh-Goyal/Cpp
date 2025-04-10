#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout <<"Enter values of a,b,c\n";
    cin >>a >>b >>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<< a <<" is largest\n";
            if(b>c)
            {
                cout<< b <<" is middle value\n";
                cout<< c <<" is smallest\n";
            }
            else
            {
                cout<< c <<" is middle value\n";
                cout<< b <<" is smallest\n";
            }
        }
        else
        {
            cout<< c <<" is largest\n";
            cout<< a <<" is middle value\n";
            cout<< b <<" is smallest\n";
        }
    }
    else
    {
        if(b>c)
        {
            cout<< b <<" is largest\n";
            if(a>c)
            {
                cout<< a <<" is middle value\n";
                cout<< c <<" is smallest\n";
            }
            else
            {
                cout<< c <<" is middle value\n";
                cout<< a <<" is smallest\n";
            }
        }
        else
        {
            cout<< c <<" is largest\n";
            cout<< b <<" is middle value\n";
            cout<< a <<" is smallest\n";
        }
    }
}