#include <iostream>
#include "Decomposition.h"

using namespace std;

void Date::SetDate(int d, int m, int y) {

    this->day = d;
    this->month = m;
    this->year = y;
}

void Date::Print() {

    cout << this->day << "/"
         << this->month << "/"
         << this->year << endl;
}

int Date::GetDay() {

    return this->day;
}

int Date::GetMonth() {

    return this->month;
}

int Date::GetYear() {

    return this->year;
}
