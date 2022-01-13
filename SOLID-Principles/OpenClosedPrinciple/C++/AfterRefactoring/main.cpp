#include<iostream>
#include"Customer.h"

using namespace std;


int main(int argc, char *argv[]){
    double SaleAmount=100;

    Customer* gCustomer = new GoldCustomer;
    cout<< "Gold Customer final amount to be paid is "<<gCustomer->amountToBePaid(SaleAmount)<<endl;

    Customer* sCustomer = new SilverCustomer;
    cout<< "Silver Customer final amount to be paid is "<<sCustomer->amountToBePaid(SaleAmount)<<endl;
    return 0;
}