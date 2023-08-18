#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
    Complex(){

    }
    Complex(int k){
        a=k;
        b=0;
    }
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void showData(){
            
        }
};

int main(){
    int x=5;
    Complex c1;
    c1=x;
    return 0;
}