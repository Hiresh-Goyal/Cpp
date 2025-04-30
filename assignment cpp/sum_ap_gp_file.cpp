#include <iostream>
#include<fstream>
#include <cmath>
using namespace std;
int main()
{
    double a,d,sum =0;
    int choice,n;
    ofstream fout;
    fout.open("sum.txt");
    cout<<"Enter 1 for AP\nEnter 2 for GP\n";
    cin >> choice;
    cout << "Enter the value of a \n";
    cin >> a;
    switch(choice)
    {
        case 1:
        cout << "Enter the value of d \n";
        cin >> d;
        cout << "Enter the value of n \n";
        cin >> n;
        fout << "The series is as follows :-\n";
        for(int i=0;i<n-1;i++)
        {
            fout<<a+i*d <<" + ";
            sum += a+i*d;
        }
        fout <<a+(n-1)*d <<" = " <<sum+a+(n-1)*d;
        break;
        case 2:
        cout << "Enter the value of r \n";
        cin >> d;
        cout << "Enter the value of n \n";
        cin >> n;
        fout << "The series is as follows :-\n";
        for(int i=0;i<n-1;i++)
        {
            fout<<a*pow(d,i) <<" + ";
            sum += a*pow(d,i);
        }
        fout <<a*pow(d,n-1) <<" = " <<sum+a*pow(d,n-1);
        break;
    }
    fout.close();
    return 0;
}