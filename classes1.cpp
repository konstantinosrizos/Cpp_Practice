#include <iostream>

using namespace std;

class Date {

// declare public elements..else is private..
public:
    int day;
    int month;
    int year;

    // Method-Function set the pointer (this->)
public:
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

    // Getters
    int GetDay() {

        return this->day;
    }

    int GetMonth() {return this->month;}

    int GetYear() {return this->year;}

    // Setters
    void SetDay(int d) {

        this->day = d;
    }

    void SetMonth(int m) {this->month = m;}

    void SetYear(int y) {this->year = y;}

};

int main() {

    int d, m, y;

    cout << "Enter date: ";
    cin >> d >> m >> y;

    Date dt;
    dt.SetDate(d, m, y);

    cout << "Entered date: ";

    dt.Print();

    cout << "month: " << dt.GetMonth();

    return 0;
}

