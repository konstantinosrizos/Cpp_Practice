#include <iostream>
using namespace std;


unsigned long int factorial(unsigned int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main()
{
    unsigned int n;
    unsigned long z;

    cout << "Factorial n!" << endl;

    cout << "Dose n: ";
    cin >> n;
    z=factorial(n);

    cout << n << "! = " << z <<  endl;
    return 0;
}
