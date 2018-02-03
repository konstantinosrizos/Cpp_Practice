#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string s;
    cout << "Enter some text: ";
    getline(cin, s);

    int n;

    cout << "Enter number n: ";
    cin >> n;

    ofstream f("test.txt");

    // writing the sentence n times into the file !
    for(int i = 1; i <= n; ++i){
        f << s << endl;
    }
    f.close();

    return 0;
}
