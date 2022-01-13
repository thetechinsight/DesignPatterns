#include<iostream>
#include<string>
#include<regex>


#include"Utils.h"

using namespace std;
/**
 * We can improve the class above by removing the responsibility of email validation from the Person class
 * and creating a new Email class that will have that responsibility
 */

class Person{
    string _name;
    string _email;
public:
    Person(string name,string email);

    string getName() const;

    string getEmail() const;

    bool isValidEmail()  // We have split the job. 
    {

    return Utils::isValidEmailAddress(_email);

    }
};