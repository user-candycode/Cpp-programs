#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void set_date(int x, int y){
            a=x;
            b=y;
        }
        void show_data(){
            cout<<"a: "<<a<<" b: "<<b<<endl;
        }

        Complex operator +(Complex c){
            Complex temp;
            temp.a = c.a;
            temp.b = c.b;
            return temp;
        }
};


int main(){
    Complex c1,c2,c3;
    c1.set_date(3,4);
    c2.set_date(5,6);

    //c3 = c1.operator+(c2);  // is a valid opertor function
    c3 = c1+c2; // also valid
    return 0;
}