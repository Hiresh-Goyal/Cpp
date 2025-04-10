#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter the character ";
    cin>>a;
    if((a>48) and(a<58))
    cout <<"entered char is a digit";
    else if(((a>64) and(a<91)) or((a>96) and(a<123)))
    cout <<"entered char is a char";
    else
    cout <<"entered char is a symbol";
}