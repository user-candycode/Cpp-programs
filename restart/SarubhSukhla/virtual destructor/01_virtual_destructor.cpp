#include<iostream>

using namespace std;

class A{
    int a;
    public:
        void f1(){

        }
        A(){
            cout<<"A"<<endl;
        }
        virtual ~A(){
            cout<<"~A"<<endl;
        }
};

class B: public A{
    int b;
    public:
        void f2(){

        }
        B(){
            cout<<"B"<<endl;
        }
        ~B(){
            cout<<"~B"<<endl;
        }
};

int fun();
int fun(){
    A *p = new B; 
    p->f1(); // correct
    // p->f2(); // error // cannot invoke the methods that are created in child class using parent object
    delete p;
    return 0;
}

int main(){
    fun();
    return 0;
}
//note : if you  do not delete the object of A the destructor will never ran hence dynamically allocated memory will never be freed