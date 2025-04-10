#include <iostream>
using namespace std;
class student
{
    string name;
    int rollno ,marks[3];
    public :
    void setDetails()
    {
        cout << "Enter your name ";
        cin >> name;
        cout << "Enter your roll number ";
        cin >> rollno;
        cout << "Enter your marks of first subject ";
        cin >> marks[0];
        cout << "Enter your marks of second subject ";
        cin >> marks[1];
        cout << "Enter your marks of third subject ";
        cin >> marks[2];
    }
    int calculateTotal()
    {
        return(marks[0]+marks[1]+marks[2]);
    }
    float calculateAverage()
    {
        return(calculateTotal()/3);
    } 
    void assignGrade()
    {
        float avg = calculateAverage();
        if(avg>90)
        cout << "Your Grade is A";
        else if(avg>80)
        cout << "Your Grade is B";
        else if(avg>70)
        cout << "Your Grade is C";
        else if(avg>60)
        cout << "Your Grade is D";
        else 
        cout << "Your Grade is E";
    }
    void displayStudent()
    {
        cout << "Name of student is " << name;
        cout << "\nRoll number of student is " <<rollno;
        cout <<"\nMarks are as follows " <<marks[0] <<" " <<marks[1] <<" " <<marks[2] <<"\n";
        assignGrade();
    }
};

int main()
{
    student x;
    x.setDetails();
    x.displayStudent();
}