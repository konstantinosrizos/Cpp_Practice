#include <iostream>

using namespace std;

void Print(int n);

int main() {

    while(1) {
        cout << "Enter a number (0 for end): ";
        int n;
        cin >> n;
        if(n == 0) {
            break;
        } else {
            Print(n);
        }
    }

    return 0;
}

void Print(int n) {

    for(int i = 1; i <= n; ++i) {
        cout << "*";
    }
    cout << endl;
}
