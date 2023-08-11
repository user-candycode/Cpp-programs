#include<iostream>

using namespace std;

// when we create object of a derived class, what will happen
// constructor runs from parent to child 
// constructor is called from child to parent

class A{
    public:
        A(){
            cout<<"constructor of A"<<endl;
        }
};

class B: public A{
    public:
        B(){
            cout<<"constructor of  b"<<endl;
        }
        /*behind the scene
        B():A(){

        }
        */
};

int main(){
    B obj;

    return 0;
}