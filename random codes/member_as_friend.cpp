#include <iostream>
using namespace std;

class Bank_Account;
class BankManager
{
    public:
    void accessDetails(Bank_Account);
};
class Bank_Account
{
    float balance;
    void displayBalance();
    void deposit()
    {
        float deposit;
        cout << "Enter the amount to deposit ";
        cin >> deposit;
        balance += deposit;
    }
    void withdraw()
    {
        float withdraw;
        cout << "Enter the amount to withdraw ";
        cin >> withdraw;
        balance -= withdraw;
    }
    public :
        Bank_Account();
        friend void BankManager :: accessDetails(Bank_Account);
};

Bank_Account :: Bank_Account()
{
    cout << "Enter the balance of your account ";
    cin >> balance;
}

void Bank_Account :: displayBalance()
{
    cout << "Your balance = " << balance;   
}

void BankManager :: accessDetails(Bank_Account person)
{
    int c;
    do
    {
        cout <<"Enter 1 to check your balance\nEnter 2 to deposit\nEnter 3 to withdraw\nEnter 4 to quit\n";
        cin >> c;
        if(c == 2)
        person.deposit();
        else if(c==3)
        person.withdraw();
        else if(c==1);
        person.displayBalance();
        cout <<"\n";
    }
    while(c==1 || c==2 || c==3);
}

int main()
{
    BankManager man;
    Bank_Account person1;
    man.accessDetails(person1);
    return 0;
}