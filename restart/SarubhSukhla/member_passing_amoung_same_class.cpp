#include<iostream>

using namespace std;

class Complex{
    private:
        int r;
        int c;
    public:
        void set_data(int x,int y){   // setting variables OR in point of class
            r=x;
            c=y;
        }
        void show_data(){
            cout<<r<<" + "<<c<<"i"<<endl;  // print out data OR out point of a class
        }

        Complex add(Complex c2){  // a simple class function
            Complex temp;
            temp.r = r+c2.r;
            temp.c = c+c2.c;
            return(temp);   // this way is also valid
        }
};

int main(){
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
    c3 = c1.add(c2);

    c3.show_data();

    return 0;
}