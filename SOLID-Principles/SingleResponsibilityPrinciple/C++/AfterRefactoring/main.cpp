#include<iostream>
#include"Person.h"

using namespace std;


int main(int argc, char *argv[]){

    Person p("Ankur","ankur@xyz.cm");
    cout<<boolalpha<<"Is Person have valid email address = "<<p.isValidEmail()<<endl;

    return 0;
}