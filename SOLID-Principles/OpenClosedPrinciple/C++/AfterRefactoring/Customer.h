#include<iostream>
#include<string>

/**
 * Now how to refactor the code , you need to create abstraction
 */

class Customer{
    public:
        virtual double amountToBePaid(double totalSales)=0;
};



class GoldCustomer: public Customer{

    public:
        virtual double amountToBePaid(double totalSales) override{
                return totalSales - ((totalSales * 10)/100); 
        }
};

class SilverCustomer: public Customer{

    public:        
        virtual double amountToBePaid(double totalSales) override{
                return totalSales - ((totalSales * 5)/100); 
        }
};