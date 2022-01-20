#include<iostream>

using namespace std;

/**
 * Good example of Liskov Substitution Principle
 * 
 */

class Bird{
    public:
        virtual void scientificName()=0;
};

class FlyingBirds: public Bird{
    public:
        virtual void fly()=0;

};

class Duck: public FlyingBirds{

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

};


int main(int argc, char *argv[]){

    FlyingBirds* duck = new Duck();
    duck->scientificName();
    duck->fly();

    cout <<"\n\n";
    Bird* ostrich = new Ostrich;
    ostrich->scientificName();
    // ostrich->fly();   
  


    return 0;
}