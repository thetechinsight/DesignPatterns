#include<iostream>
#include"Customer.h"

using namespace std;


int main(int argc, char *argv[]){

    Customer c1(1);
    cout<<c1.amountToBePaid(100);
    return 0;
}