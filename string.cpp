#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1 = "Hey";
    cout << s1 << endl;
    cout << endl;

    string s2 = ("How is it going");
    cout << s2 << endl;
    cout << endl;

    string s3;
    string s4 = "";

    // checking the size of the string.
    unsigned int s1_size = s1.size();
    cout << "Size of s1 is: " << s1_size << endl;

    unsigned int s2_size = s2.size();
    cout << "Size of s2 is: " << s2_size << endl;

    cout << endl;

    // checking if its empty.
    bool emp = s1.empty();
    cout << "Is s1 empty? " << emp << endl;
    cout << endl;

    char c1 = s1[0];
    char c2 = s1.at(0);
    cout << "First letters" << endl;
    cout << c1 << " " << c2 << endl;

    cout << endl;

    //comparisons
    if(s1 == s2) {}
    if(s2 != s1) {}
    if(s1 == "Hello") {}

    if(s1 > s2) {}
    if(s1 < s2) {}

    //adding the 'E' to s3 string
    s3.push_back('E');
    cout << "Adding the 'E' to s3 string" << endl;
    cout << s3 << endl;

    cout << endl;

    s1 += " there";
    string s5 = s1 + ", " + s2;
    cout << s5 << endl;

    cout << endl;
    //Take from the user whole text.
    string s6;
    cout << "Now type something that you want: " << endl;
    getline(cin, s6);
    cout << s6 << endl;

    return 0;
}
