#include <iostream>
#include <string>

using namespace std;

class Person {

public:
    string username;
    Person(string name){
        username = name;
    }
};


int main() {


    string name1 = "Konstantinos";
    string name2 = "Alex";

    Person p1(name1);
    Person p2(name2);

    if (p1.username.compare(p2.username) == 0) {
        cout << "It's the same" << endl;
    }else {
        cout << "It's not the same" << endl;
    }


    return 0;
}
