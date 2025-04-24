#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("hi.txt");
    fout.open("hi2");
    char ch;
    fin.get(ch);
    while(fin)
    {
        fout << ch;
        fin.get(ch);
    }
    cout <<"It has been done";
    return 0;
}