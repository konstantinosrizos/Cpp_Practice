#include <iostream>
#include <math.h>

using namespace std;

double hypotenuse(double, double);

int main() {

    double x, y, ipotinousa;

    cout << "Give the 2 sides: " << endl;
    cin >> x >> y;

    ipotinousa = hypotenuse(x, y);
    cout << endl;
    cout << ipotinousa << endl;

    return 0;
}

double hypotenuse(double x, double y) {

    double z, hypo; // where hypo is ipotinousa!

    z = (x * x) + (y * y);
    hypo = sqrt(z);

    return hypo;
}
