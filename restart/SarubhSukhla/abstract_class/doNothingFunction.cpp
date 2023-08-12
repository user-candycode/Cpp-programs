#include<iostream>
using namespace std;

class Person{   // cannot have any object of class person
    public:
        // void fun()=0; // do nothing function  // but invalid  // because if this class pointer points to child class object this may be inherited and ran directly which is illegal 
        virtual void fun()=0; // now due to late binding there is no way that this will ever be called
        void f1(){

        }
};

class Student : public Person{
        public:
            void fun(){  // overiding of do nothing function

            }
};

int main(){
    // Person obj; // invalid as the person is an abstract class
    Student obj;
    return 0;
}


// any class that have even a single do nothing function/pure virtual function is known as abstract class
// as this class can never have its own object
// i.e we cant instantiate abstract class