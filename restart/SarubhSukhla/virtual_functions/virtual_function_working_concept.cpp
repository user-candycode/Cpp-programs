#include<iostream>
using namespace std;

// virtual functions have late binding rest have early binding
class A{
    // *_vptr // vtable
    public:
        void f1(){}
        virtual void f2(){}  // will go inside vtable
        virtual void f3(){} // will go inside vtable
        virtual void f4(){} // will go inside vtable

        /*
        _____________________
        | f2 | f3 | f4 |   |   ==> vtable
        */
};

class B: public A{
    public:
        void f1(){}
        void f2(){} // will go inside vtable
        void f4(int x){}    // will go inside vtable

        /*
        ____________________________
        | f2 | f3(P) | f4(P) |  |  |
        */
};

int main(){
    A *p,o1;
    p = &o1;
    /*
    here p points to class A so the vtable will be checked for A i.e o1
    */
    p->f1();    // EB
    p->f2();    // LB
    p->f3();    // LB
    p->f4();    // LB
    // p->f4(5); // invalid // EB


    A *q;
    B o2;
    q = &o2;
    // q points the object of class B i.e decendent class
    q->f1();    // EB
    q->f2();    // LB
    q->f3();    // LB
    q->f4();    // LB
    // q->f4(5); // invalid // EB
    return 0;
}