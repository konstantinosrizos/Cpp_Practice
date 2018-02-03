 #include "person.h"

 person::person(std::string name){
     username = name;
     std::cout << "constructor (1) called:" << std::endl;
 }

person:: person(std::string name,string lname ){
     username = name;
     userlname=lname;

     std::cout << "constructor (2) called:" << std::endl;
 }
 person::person(std::string name,string lname,int age){
     username = name;
     userlname=lname;
     userage=age;
     std::cout << "constructor (3) called:" << std::endl;
 }

void person::print(){
    std::cout << "name     = " <<  this->username  << std::endl;
    std::cout << "surname  = " <<  this->userlname << std::endl;
    std::cout << "age      = " <<  this->userage   << std::endl;
}

