#include<iostream>
#include<string>
#include<regex>

using namespace std;
/**
 * @brief  
 *  A Person, this class should not include email
 *  validation because that is not related with a person behaviour
 * 
 */

class Person{
    string _name;
    string _email;
public:
    Person(string name,string email);

    string getName() const;

    string getEmail() const;

    bool isValidEmail()  // Here is an issue, WE DONT NEED to provide Implementation in the person class to verify email address, because Person class doing more job.
    {

    const std::regex ePattern  ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    return regex_match(_email, ePattern);

    }
};