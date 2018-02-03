#include <iostream>

using namespace std;

class DummyClass {
    int dummy_attr1;
    char dummy_attr2;

public:
    DummyClass() : dummy_attr1(0), dummy_attr2('E') {
        cout << "Hello world!" << endl;
    }

    DummyClass(int param) : dummy_attr1(param), dummy_attr2('P') {
        cout << "2nd Helloworld! Param = " << param << endl;
    }
    void Print() {
        cout << "dummy_attr1 = " << dummy_attr1 << endl;
        cout << "dummy_attr2 = " << dummy_attr2 << endl;
    }
};

int main() {

    DummyClass dummy1;
    dummy1.Print();

    DummyClass dummy2(100);
    dummy2.Print();

    return 0;
}
