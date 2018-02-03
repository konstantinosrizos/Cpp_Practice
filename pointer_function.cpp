#include <iostream>
#include <math.h>

using namespace std;

void square (float *);

int main() {

    float x;
    cout << "Give a number: " << endl;
    cin >> x;
    float *result = &x;

    cout << *result << endl;
    cout << x << endl;

    square (result);

    cout << *result << endl;

    return 0;
}


void square (float *y) {
    cout << "this is pointer" << endl;
     *y *= *y;
}


