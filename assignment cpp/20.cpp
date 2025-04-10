#include <iostream>
using namespace std;

class Student {
private:
    string name;
    static int count; // Static data member to count students

public:
    Student(string n) {
        name = n;
        count++;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }

    static void totalStudents() {
        cout << "Total Students: " << count << endl;
    }
};

// Initialize the static data member
int Student::count = 0;

int main() {
    Student s1("Hiresh");
    Student s2("Negi");
    Student s3("Hitesh");

    s1.display();
    s2.display();
    s3.display();

    // Calling static function using class name
    Student::totalStudents();

    return 0;
}
