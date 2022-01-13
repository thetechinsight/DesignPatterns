#include"Person.h"

Person::Person(string name,string email):_name(name),_email(email){

}

string Person::getName() const {
    return _name;
}

string Person::getEmail() const {
    return _email;
}


