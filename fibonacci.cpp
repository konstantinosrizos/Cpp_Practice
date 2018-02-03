#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n==1 || n==2) return 1;
    return fibonacci(n-1) + fibonacci(n - 2);
}

int main()
{
    int n, z;

    cout << "Fibonacci Numbers" << endl;

    cout << "Give n: ";
    cin >> n;
    z=fibonacci(n);

    cout << "fibonacci(" << n << ") = " << z <<  endl;
    return 0;
}
