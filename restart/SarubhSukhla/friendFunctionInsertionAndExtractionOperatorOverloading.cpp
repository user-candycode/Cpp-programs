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
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&,Complex&);
};

ostream& operator<<(ostream& dout,Complex c){
    dout<<"a: "<<c.a<<" b: "<<c.b<<endl;
    return dout;
}

istream& operator>>(istream& din,Complex& c){
    din>>c.a>>c.b;
    return din;
}

int main(){
    Complex c1;
    cout<<"Enter a complex Number: ";
    cin>>c1;

    cout<<"You Have Entered: ";
    cout<<c1; // operator<<(cout,c1);
    return 0;
}