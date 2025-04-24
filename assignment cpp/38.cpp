#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("hi.txt");
    string str;
    int ch=0,words=0,lines=0;
    getline(fin,str);
    while(fin)
    {
        int n = str.length();
        for(int i =0;i<n;i++)
        {
            if(str[i] == ' ')
                words ++;
            else
                ch ++;
        }
        lines++;
        getline(fin,str);
    }
    cout << "The number of characters are :- " << ch;
    cout << "\nThe number of words are :- " << words;
    cout << "\nThe number of lines are :- " << lines;
}