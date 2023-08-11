#include<iostream>
using namespace std;

// first child destructor will ran then parent destuctor will run
// first b will end then a will end

class A{
    int a;
    public:
        A(int k){
            a=k;
        }
        ~A(){
            cout<<"destructor of A ran"<<endl;
        }
};

class B: public A{
    int b;
    public:
        B(int x, int y):A(x){
            b=y;
        }
        ~B(){
            cout<<"destructor of B ran"<<endl;
        }
};


int main(){
    B obj(3,4);
    return 0;
}