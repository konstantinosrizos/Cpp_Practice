#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class person{

 public:
 std::string username;
 std::string userlname;
 int userage = 0;

 person(){};
 person(std::string name);
 person(std::string name,string lname );
 person(std::string name,string lname,int age);

 ~person(){
   std::cout << "called destructor" << std::endl;
 }
 //-----------
 void print();

};

#endif
