#include <iostream>
using namespace std;
class bank
{
    float acc_bal = 100000;
    public:
    void deposit()
    {
        float deposit;
        cout << "Enter the amount to deposit";
        cin >> deposit;
        acc_bal += deposit;
    }
    void withdraw()
    {
        float withdraw;
        cout << "Enter the amount to withdraw";
        cin >> withdraw;
        acc_bal -= withdraw;
    }
    void show()
    {
        cout << "Your acc balance is " << acc_bal;
    }
};
int main()
{
    bank x;
    int c;
    do
    {
        cout <<"Enter 1 to check your balance\nEnter 2 to deposit\nEnter 3 to withdraw\nEnter 4 to quit\n";
        cin >> c;
        if(c == 2)
        x.deposit();
        else if(c==3)
        x.withdraw();
        else if(c==1);
        x.show();
        cout <<"\n";
    }
    while(c==1 || c==2 || c==3);
    return 0;
}