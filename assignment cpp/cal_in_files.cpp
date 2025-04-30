#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    double a,b;
    cout << "Enter the first number\n";
    cin >> a;
    cout << "Enter the second number\n";
    cin >> b;
    ofstream fout;
    fout.open("result.txt");
    int choice = 1;
    while(choice != 4)
    {
        cout<<"Enter 1 for additon\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 to quit\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
            fout << "A + B = " <<a <<" + " <<b <<" = " << a + b <<endl;
            break;
            case 2:
            fout << "A - B = " <<a <<" - " <<b <<" = " << a - b <<endl;
            break;
            case 3:
            fout << "A * B = " <<a <<" * " <<b <<" = " << a * b <<endl;
            break;
            case 4:
            break;
            default:
            cout << "Wrong Input\n";
            break;
        }
    }
    fout.close();
    return 0;
}