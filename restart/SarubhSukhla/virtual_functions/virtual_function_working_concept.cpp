#include<iostream>
using namespace std;

class A{
    public:
        void f1(){}
        virtual void f2(){}
        virtual void f3(){}
        virtual void f4(){}
};

class B: public A{
    public:
        void f1(){}
        void f2(){}
        void f4(int x){}
};

int main(){
    return 0;
}