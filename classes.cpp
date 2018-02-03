#include <iostream>

using namespace std;

class Date {

// declare public elements..
public:
    int day;
    int month;
    int year;

    // Method-Function set the pointer (this->)
    void SetDate (int d, int m, int y) {
        this->day = d;
        this->month = m;
        this->year = y;
    }

    // Method for printing ..
    void Print() {
        cout << this->day << "/"
             << this->month << "/"
             << this->year << endl;
    }

};

int main() {

    Date dt;
    Date dt1;
    dt.SetDate(12, 03, 1993);
    dt1.SetDate(30, 05, 1990);

    dt.Print();
    dt1.Print();


    return 0;
}
