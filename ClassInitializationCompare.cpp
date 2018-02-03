//
// very simple program to demonsrtate operator overloading in C++
// Here the usernames between two persons are being compared

#include <iostream>
#include <string>

class person{

 public:
 // variables
 std::string username;
 std::string surname;
 int age =10;

    person(std::string name) {
        username = name;
    }

    person(std::string name, std::string sname) {
        username = name;
        surname = sname;
    }

    person(std::string name, std::string sname, int ilikia) {
        username = name;
        surname = sname;
        age = ilikia;
    }
};

void Print(person a, person b) {

    std::cout <<a.age << " " << b.age <<std::endl;

}

 bool operator ==(const person p1, const person p2){
    int value = p1.username.compare(p2.username);
    if(value==0)
     return true;
    else
     return false;
}


int main()
{

    std::string name1 = "xaris";
    std::string name2 = "john";
    std::string sname1 = "kosoglou";
    std::string sname2 = "salis";
    int age1 = 30;
    int age2 = 20;

    person p1(name1);
    person p4(name2);
    person p2(name1, sname1);
    person p5(name2, sname2);
    person p3(name1, sname1, age1);
    person p6(name2, sname2, age2);

     if(p1.username==p4.username)
   std::cout << p1.username << " " << p2.username <<std::endl;

   if(p3.age==p6.age)
    std::cout <<p3.age << " " << p6.age <<std::endl;


    Print(p3, p6);

   std::cout << "finished " << std::endl;

   return 0;

}
