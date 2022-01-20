#include<iostream>

using namespace std;

class Worker{
    public:
        virtual void work()=0;
        virtual void sleep()=0;
};

class HumanWorker: public Worker{
    public:
        virtual void work() override{
            cout << "This worker can work only 8 hours in a day."<<endl;
        }

        virtual void sleep() override{
            cout << "Worker is Human thats why he can sleep."<<endl;
        }

};

class RobotWorker: public Worker{
    public:
        virtual void work() override{
            cout << "This worker can work 16 hours in a day."<<endl;
        }

        virtual void sleep() override{    //  it is forced to override the sleep method albeit RobotWorker doesn’t need sleep.
            cout << "Worker is Robot thats why he can't sleep."<<endl;
        }
};

int main(int argc, char *argv[]){

    Worker* human = new HumanWorker;
    human->work();
    human->sleep();

    Worker* robot = new RobotWorker;
    robot->work();
    robot->sleep();



   
    return 0;
}