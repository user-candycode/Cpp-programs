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
            cout<<"a: "<<a<<" b: "<<endl;
        }
        friend void fun(Complex); // declaration of fun function
};

// defination of fun function
// void Complex::fun(){}  // is invalid way of defining friend function
void fun(Complex c){
    cout<<c.a<<"and"<<c.b<<endl;
}

int main(){
    Complex c1;
    c1.set_data(3,4);
    // c1.fun(); invalid way of calling friend function
    fun(c1);
    return 0;
}