#include<iostream>

using namespace std;

class Car{
    private:
        int gear;
    public:
        void incrementGear(){
            if(gear<5)
                gear++;
        }
};

class SportsCar:public Car{
    
};

int main(){
    SportsCar obj;

    return 0;
}