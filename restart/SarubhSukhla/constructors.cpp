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