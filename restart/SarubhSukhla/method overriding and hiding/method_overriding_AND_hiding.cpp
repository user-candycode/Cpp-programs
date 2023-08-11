#include<iostream>
using namespace std;

class A{
    public:
        void f1(){ cout<<"orignal"<<endl; }
        void f2(){ cout<<"orignal"<<endl; }
};

class B : public A{
    public:
    void f1(){ cout<<"new"<<endl; } // method overriding
    void f2(int x){ cout<<"new"<<endl; }  // method hiding
};
int main(){
    B obj;
    obj.f1(); 
    obj.f2(3);
    return 0;
}

// method overloading occurs when in  same scope 
// method overloading and overriding is shown above