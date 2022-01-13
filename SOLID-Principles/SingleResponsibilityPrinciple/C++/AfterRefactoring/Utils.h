#include<iostream>
#include<string>
#include<regex>

using namespace std;

class Utils{

public:

    static bool isValidEmailAddress(const string &emailID)
    {
        const std::regex ePattern  ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

        return regex_match(emailID, ePattern);
    }

};