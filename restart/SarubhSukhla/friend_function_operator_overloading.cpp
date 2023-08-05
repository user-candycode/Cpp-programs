#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void set_data(int x, int y){
            a=x;
            b=y;
        }
        void show_data(){
            cout<<"a: "<<a<<" b: "<<b<<endl;
        }
        
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex);
};

// friend function overloading of a binary operator
Complex operator+(Complex X,Complex Y){
        Complex temp;
        temp.a=X.a +Y.a;
        temp.b=X.b +Y.b;
        return temp;
}

// friend function overloading of unary operator -a
Complex operator-(Complex c3){
    Complex temp;
    temp.a = -c3.a;
    temp.b = -c3.b;
    return temp;
}

int main(){
    Complex c1,c2,c3,c4;
    c1.set_data(3,4);
    c2.set_data(5,6);
    c3 = c1+c2;  // c1.operator+(c2)
    c3.show_data();
    c4 = -c3;
    c4.show_data();

    return 0;
}