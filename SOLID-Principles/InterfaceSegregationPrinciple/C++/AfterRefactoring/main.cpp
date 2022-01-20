#include<iostream>

using namespace std;

class WorkableWorker{
    public:
        virtual void work()=0;
};

class SleepableWorker{
    public:
        virtual void sleep()=0;
};

class HumanWorker: public WorkableWorker, public SleepableWorker{
    public:
        virtual void work() override{
            cout << "This worker can work only 8 hours in a day."<<endl;
        }

        virtual void sleep() override{
            cout << "Worker is Human thats why he can sleep."<<endl;
        }

};

class RobotWorker: public WorkableWorker{
    public:
        virtual void work() override{
            cout << "This worker can work only 16 hours in a day."<<endl;
        }
        // The implementations don’t have to provide empty methods or throw unimplemented methods.
};

int main(int argc, char *argv[]){

    HumanWorker human;
    human.work();
    human.sleep();

    RobotWorker robot;
    robot.work();  

  
    return 0;
}