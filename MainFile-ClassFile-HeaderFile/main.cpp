#include <iostream>
#include <string>
#include "person.h"
#include "person.cpp"


int main()
{

    person user1 ("test");
    user1.print();
    person user2("test","yourlastname");
    user2.print();
    person user3("test","yourlastname",10);
    user3.print();

return 0;

}
