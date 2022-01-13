#include<iostream>
#include<string>

/**
 * Below is the class which violate OCP
 *
 */

class Customer{

int _customerType;

public:
    Customer(int Type):_customerType(Type){}

    double amountToBePaid(double totalSale){

        double finalAmount  = 0;
        if(_customerType==1){

            finalAmount = totalSale - ((totalSale * 10)/100);    
            
        }else{
            finalAmount = totalSale - ((totalSale * 5)/100);     
        }

        return finalAmount;
    }
};
