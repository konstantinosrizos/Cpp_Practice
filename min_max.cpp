#include <iostream>

using namespace std;

int main() {

    int a[10];
    int max = 0;
    int min;

    for (int x=0; x < 10; x++) {
        cout << "Put a number" << endl;
        cin >> a[x];
    }

    cout << endl;
    cout << "The numbers are: " << endl;
    cout << endl;

    for (int x=0; x < 10; x++) {
        cout << a[x] << endl;
    }

    for (int x=0; x < 10; x++) {
        if (a[x] > max) {
            max = a[x];
        }
    }

    for (int x=0; x < 10; x++) {
        if (a[x] < min) {
            min = a[x];
        }
    }

    cout << endl;
    cout << "The max is : " << max << endl;
    cout << "The min is : " << min << endl;


    return 0;
}
