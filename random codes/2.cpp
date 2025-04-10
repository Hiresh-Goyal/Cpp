//2d array using constructor
#include <iostream>
using namespace std;

class matrix
{
    int m[3][3];
    public:
    matrix()
    {
        cout << "Enter value of matrices\n";
        for(int i = 0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            cin>> m[i][j];
        }
    }

    matrix(int i)
    {
    }
    matrix transpose()
    {
        matrix m2(1);
        for(int i = 0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            m2.m[j][i] = m[i][j];
        }
        return m2;
    }
    void display()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            cout << m[i][j] <<"  ";
            cout << "\n";
        }
    }
};

int main()
{
    matrix a,b(1);
    b = a.transpose();
    b.display();
    return 0;
}