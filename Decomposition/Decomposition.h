#ifndef DECOMPOSITION_H
#define DECOMPOSITION_H

#include <iostream>

class Date {

        int day;
        int month;
        int year;

    public:
        void SetDate(int d, int m, int y);
        void Print();
        int GetDay();
        int GetMonth();
        int GetYear();

};

#endif // DECOMPOSITION_H
