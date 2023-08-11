#include<iostream>
using namespace std;

class A{
    public:
        // void f1(){ }
        virtual void f1(){ }  // late binding due to "virtual" runtime/dynamic binding
};
class B: public A{
    public:
        // void f1(){} // function overriding  // normal case
        // OR
        virtual void f1(){}
};

int main(){
    A *p,o1;
    B o2;
    p=&o1; // valid
    p=&o2; // valid
    // B *q; q=&o1; // invalid, decendent class pointer pointing to base class object 
    // o2.f1(); // child class f1 will run (child)  // normal case
    // p->f1(); // base class f1 will run (parent)  // normal case
    p->f1(); // childe class f1 will run due to virtual invoking late binding
    return 0;
}