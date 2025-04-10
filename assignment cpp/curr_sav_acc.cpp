#include <iostream>
using namespace std;

class account
{
    public :
    string name;
    long acc_no;
    double bal;
    char type;
    
    account()
    {
        cout << "Enter your name\n";
        cin >>name;
        cout << "Enter your account number\n";
        cin >>acc_no;
        cout << "Enter your current balance\n";
        cin >>bal;
    }

    void deposit()
    {
        double dep;
        cout << "Enter amount to deposit\n";
        cin >>dep;
        bal += dep;
    }

    void withdraw()
    {
        double with;
        cout << "Enter amount to withdraw\n";
        cin >>with;
        if(with >= bal)
        {
            cout << "Not enough bak balance\n";
        }
        else
        bal -= with;
    }

    void display()
    {
        cout << "Your balance = " << bal <<endl;
    }
};

class curr_acc : public account
{
    public :
    double min_bal = 1000,service_charge = 500;
    void check()
    {
        if(bal<min_bal)
        {
            bal-=service_charge;
            cout << "please maintain minimum balance to avoid service charges";
        }
    }

};

class sav_acc : public account
{
    public :
    void interest()
    {
        double rate;
        int months;
        cout << "Enter the rate of interest\n";
        cin >> rate;
        cout << "enter the number of months to calculte interest for\n";
        cin >> months;
        for(int i =1;i<=months;i++)
        {
            double interest = bal * rate/100;
            bal += interest;
        }
    }
};

int main()
{
    int type,choice;
    cout << "Enter 1 for current account\nEnter 2 for savings account";
    cin >>type;
    
    if(type == 1)
    {
        curr_acc a;
        a.type = type;
        a.check();
        cout << "Enter 1 to deposit money\nEnter 2 to display balance\n";
        cin >> choice;
        if(choice == 1)
        a.deposit();
        else
        a.display();
    }

    else if(type == 2)
    {
        sav_acc a;
        a.type = type;
        a.interest();
        cout << "Enter 1 to deposit money\nEnter 2 to withdraw money\nEnter 3 to display balance\n";
        cin >> choice;
        if(choice == 1)
        a.deposit();
        else if(choice == 2)
        a.withdraw();
        else
        a.display();
    }
}