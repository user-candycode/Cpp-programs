#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(int x,int y){
            a=x;
            b=y;
        }
};

int main(){
    // Complex a1; // invalid object declaration while using parameterized constructor
    Complex a1(4,5);
    return(0);
}