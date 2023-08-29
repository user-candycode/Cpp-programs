#include<iostream>

using namespace std;

namespace MySpace{
    int a;
    void f1();
    class Hello{
        public:
            void hello(){
                cout<<"hello"<<endl;
            }
    };
}

void MySpace::f1(){
    cout<<"In f1"<<endl;
}

int main(){
    MySpace::a=5;
    MySpace::Hello obj;
    obj.hello();
    MySpace::f1();
    return 0;
}