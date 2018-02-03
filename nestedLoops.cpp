#include <iostream>

using namespace std;

int main() {

    int M;
    cout << "Enter A positive number: ";
    cin >> M;

    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
