#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(){ // constructor of this class complex
            cout<<"ehllo constructor"<<endl;
        }
};

int main(){
    Complex c1,c2,c3;
    return 0;
}

// constructor must be an instance member of a function so it can't be static