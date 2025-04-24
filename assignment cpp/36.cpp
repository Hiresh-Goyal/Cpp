#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("hi.txt");
    cout << "The contents of file are\n";
    char ch;
    fin.get(ch);
    while(fin)
    {
        cout << ch;
        fin.get(ch);
    }
    return 0;
}