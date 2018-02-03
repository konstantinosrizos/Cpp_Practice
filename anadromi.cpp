#include <iostream>

using namespace std;

void anadromi(int);

int main() {

    int x;
    cout << "Give a number " << endl;
    cin >> x;
    anadromi(x);
    return 0;
}

void anadromi(int n) {

    if (n != 0) {
    cout << "HI" << endl;
    anadromi(n-1);
    }
    else {
        return;
    }
}
