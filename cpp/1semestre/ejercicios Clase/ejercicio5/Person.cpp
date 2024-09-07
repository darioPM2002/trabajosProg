#include"Person.h"



Person::Person(){
name ="unnamed";
lastName="no name";
birthDate =Date(1,1,1900);
}

Person::Person(string name, string lastName, Date birthDate){

name= name;
lastName= lastName;
birthDate= birthDate;
}