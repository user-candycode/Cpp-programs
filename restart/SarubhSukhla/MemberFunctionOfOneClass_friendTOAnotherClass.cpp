#include<iostream>

using namespace std;
class A;
class B;
class C;
class A{
    private:
    public:
        void fun(){
            cout<<"hello from A inside the B"<<endl;
        }
};

class B{
    public:
        friend void A::fun();
        friend class C;  // will make entire class a friend to this class
};

class C{

};

int main(){
    A obj1;
    B obj2;
    obj1.fun();
    // obj2.fun(); does not worked will figure out later
    return 0;
}