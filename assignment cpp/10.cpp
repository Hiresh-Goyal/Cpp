#include <iostream>
using namespace std;

void swapint()
{
    int a,b;
    cout<< "enter two numbers\n";
    cin >>a >>b;
    a= a+b;
    b=a-b;
    a=a-b;
    cout <<"Numbers after swap are \n" <<a <<" " <<b;
}

void swapchar()
{
    char a,b,c;
    cout<< "enter two characters\n";
    cin >>a >>b;
    c = a;
    a=b;
    b=c;
    cout <<"Characters after swap are \n" <<a <<" " <<b; 
}

int main()
{
    int a;
    cout<< "Enter 1 to swap 2 numbers\nEnter 2 to swap 2 characters\n";
    cin>>a;
    if(a==1)
    swapint();
    else if(a==2)
    swapchar();
    else
    cout<<"Wrong Input";
}