#include<iostream>
using namespace std;
namespace MySpace{
    int a;
    int f1();
    class A{
        public:
            void fun1();
    };
}

int MySpace::f1(){
    cout<<"Hello f1"<<endl;
}

void MySpace::A::fun1(){
    cout<<"hello f1";
}

using namespace MySpace; // global namespace changes after this line
int main(){
    a=5; // OR  MySpace::a=5;
    return 0;
}