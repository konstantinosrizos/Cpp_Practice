#include <iostream>

using namespace std;

int GetLastDigit(int n);

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;

    int last_digit = GetLastDigit(num);

    cout << "The Last Digit is: " << last_digit << endl;

    return 0;
}

int GetLastDigit(int n) {

    int result = n % 10;
    return result;

    //or you can do this
    // return n%10;
}
