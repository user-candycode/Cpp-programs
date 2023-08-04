#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void set_data(int x,int y){
            a=x;
            b=y;
        }
        void show_data(){
            cout<<"a: "<<a<<" b: "<<b<<endl;
        }
        Complex operator -(){
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
};

int main(){
    Complex c1,c2;
    c1.set_data(3,4);
    // c2 = c1.operator-();
    c2 = -c1; // negative value of c1 assigned to c2 // c2 is the caller object
    c2.show_data();
    return 0;
}

// only in binary operator the caller object is at the left eg a+b,x-y etc,
// rest of the operators uses right side caller object