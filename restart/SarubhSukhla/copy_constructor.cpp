#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(int x, int y){  // parameterized constructor
            a=x;
            b=y;
        }
        Complex(int k){  // parameterized constructor
            a=k;
        }
        Complex(){ //default constructor
        }

        Complex(Complex &c){ // copy constructor  // here we cant pass c by value so we use reference  //to avoid infinite calling of complex constructor as this is initilization of an object where a constructor is always called.
            a=c.a;
            b=c.b;
        }
};

int main(){
    Complex c1(3,4),c2,c3(5);
    Complex c4(c1); // here the compiler will create copy constructor but not the default constructor
    return 0;
}