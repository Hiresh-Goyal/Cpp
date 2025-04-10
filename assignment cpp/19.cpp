#include <iostream>
using namespace std;

class University {
private:
    string universityName;

public:
    University(string name) {
        universityName = name;
    }

    void displayUniversity() {
        cout << "University: " << universityName << endl;
    }

    // Nested class
    class Department {
    private:
        string departmentName;

    public:
        Department(string name) {
            departmentName = name;
        }

        void displayDepartment() {
            cout << "Department: " << departmentName << endl;
        }
    };
};

int main() {
    University u1("UIET Chandigarh");
    u1.displayUniversity();

    // Creating an object of the nested class
    University::Department d1("Computer Science and Engineering");
    d1.displayDepartment();

    return 0;
}
