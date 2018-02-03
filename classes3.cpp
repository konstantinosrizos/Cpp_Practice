#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Date {

    int day;
    int month;
    int year;
    string GetMonthName() {
        string months[] = {
            "january","February","March",
            "April","May","Jun","July",
            "August","September","October",
            "November","December"
        };
        return months[month - 1];
    }
public:
    Date (int d, int m, int y) {
        this->SetDate(d, m, y);
    }
    void SetDate (int d, int m, int y) {
        SetDay(d);
        SetMonth(m);
        SetYear(y);
    }
    void Print() {
        cout << this->day << "/"
             << this->month << "/"
             << this->year << endl;
    }

    void PrintNice() {
        cout << day << " " << GetMonthName()
             << " " << year << endl;
    }

    int GetDay() {
        return this->day;
    }

    int GetMonth() {
        return this->month;
    }

    int GetYear() {
        return this->year;
    }

    void SetDay(int d) {
        if (d < 0 || d > 31)
            throw logic_error ("Day out of range!");
        this->day = d;
    }

    void SetMonth(int m) {
        if (m < 1 || m > 12)
            throw logic_error ("Month must be in [1, 12]!");
        this->month = m;
    }

    void SetYear(int y) {
        if (y < 0)
            throw logic_error ("Year must be positive!");
        this->year = y;
    }

};


int main() {

    Date dt1(1, 5, 2014);
    Date dt2(dt1);

    dt1.PrintNice();
    dt2.PrintNice();


    return 0;
}
