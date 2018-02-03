# include <iostream>

using namespace std;

struct person {

    int id;
    float age;
    float height;
    float weight;
    string name;
};

int main() {

    struct person p;
    p.id = 1;
    p.age = 10;
    p.height = 1.70;
    p.weight = 68;
    p.name = "konstantinos";

    cout << "Id: " << p.id << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << endl;
    cout << "Weight: " << p.weight << endl;
    cout << "Name: " << p.name << endl;


    return 0;
}
