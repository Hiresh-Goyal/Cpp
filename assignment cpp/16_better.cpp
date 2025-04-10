#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {   
    int date, month, year;
    cout << "Enter the date: ";
    cin >> date;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    if (month < 1 || month > 12 || date < 1 || year < 1) {
        cout << "Date is incorrect";
        return 0;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) daysInMonth[2] = 29;

    if (date > daysInMonth[month]) {
        cout << "Date is incorrect";
        return 0;
    }

    long day = 0;
    for (int i = 1; i < year; i++) {
        day += isLeapYear(i) ? 366 : 365;
    }

    for (int j = 1; j < month; j++) {
        day += daysInMonth[j];
    }

    day += date - 1;
    cout << "The number of days = " << day;

    return 0;
}