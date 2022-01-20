#include<iostream>

using namespace std;
/**
 * Bad example of Liskov Substitution Principle
 * 
 */

class Bird{
    public:
        virtual void scientificName()=0;
        virtual void fly()=0;
};

class Duck: public Bird{

    public:
        virtual void scientificName() override{
            cout << "Scientific Name: Anas platyrhynchos domesticus"<<endl;
        }

        virtual void fly() override{
            cout << "Duck can fly because it is a bird."<<endl;
        }
};

class Ostrich : public Bird{

    public:
        virtual void scientificName() override{
            cout << "Scientific Name: Struthio camelus."<<endl;
        }

        virtual void fly() override{
            cout << "Ostrich is a bird, but it can't fly."<<endl;
        }
};


int main(int argc, char *argv[]){

    Bird* duck = new Duck();
    duck->scientificName();
    duck->fly();

    cout <<"\n\n";
    Bird* ostrich = new Ostrich;
    ostrich->scientificName();
    ostrich->fly();
  


    return 0;
}