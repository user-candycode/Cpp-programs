#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(int x, int y){
            a=x;
            b=y;
        }
        Complex(int k){
            a=k;
        }
        Complex(){ //default constructor
            a=0;
            b=0;
        }
};


int main(){
    Complex c1(3,4),c2(4),c3,c4=Complex(3,4),c5=4;
    return 0;
}