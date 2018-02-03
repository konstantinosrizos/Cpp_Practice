#include <iostream>

using namespace std;

void PrintMenu();

int main() {

    int n1, n2;
    cout << "Enter positive number 1: ";
    cin >> n1;
    cout << "Enter positive number 2: ";
    cin >> n2;

    PrintMenu();

    int choice;
    int result;

    cin >> choice;

    if (choice == 1){
        result = n1 + n2;
    } else if (choice == 2){
        result = n1 - n2;
    } else if (choice == 3) {
        result = n1 * n2;
    } else {
        cout << "Error! Wrong choice!" << endl;
        return 1;
    }
    cout << "The result is: " << result << endl;

    return 0;
}

void PrintMenu() {

    cout << "1. addition\n";
    cout << "2. subtraction\n";
    cout << "3. multiplication" << endl;
}
