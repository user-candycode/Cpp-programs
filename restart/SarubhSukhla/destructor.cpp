#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(){ // constructor
            cout<<"constructor ran"<<endl;
        }

        ~Complex(){ // destructor
            cout<<"destructor ran"<<endl;
        }
};

void fun(){
    Complex obj;
}

int main(){
    cout<<"======================="<<endl;
    fun();
    cout<<"***********************"<<endl;
    return 0;
}


// destructor can never be static