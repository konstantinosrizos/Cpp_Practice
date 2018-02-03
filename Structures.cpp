#include <iostream>

using namespace std;

struct Date {

    int day;
    int month;
    int year;

};

int main() {

    struct Date dt;

    cout << "Enter day: ";
    cin >> dt.day;

    cout << "Enter month: ";
    cin >> dt.month;

    cout << "Enter year: ";
    cin >> dt.year;

    cout << "Entered Date: ";
    cout << dt.day << "/" << dt.month << "/" << dt.year << endl;

    return 0;
}
