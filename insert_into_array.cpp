#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {

    int a[10];

    cout << "Insert 10 numbers: " << endl;
    for ( int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << endl;

    cout << "You have insered: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
}

    return 0;
}
