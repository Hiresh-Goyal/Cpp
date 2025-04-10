#include <iostream>
using namespace std;

class abc
{
    public:
    abc()
    {
        cout << "I am a default constructor\n";
    }
    ~abc()
    {
        cout << "I am THE DESTRUCTOR\n";
    }
};

int main()
{
    abc a;
}