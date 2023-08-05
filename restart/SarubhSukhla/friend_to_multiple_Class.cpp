#include<iostream>

using namespace std;

class B;
class A{
    private:
        int a;
    public:
        void set_data(int x){
            a=x;
        }
        friend void fun(A,B);
};
class B{
    private:
        int b;
    public:
        void set_data(int y){
            b=y;
        }
        friend void fun(A,B);
};

void fun(A o1, B o2){
    cout<<o1.a+o2.b<<endl;
}

int main(){
    A obj1;
    B obj2;
    obj1.set_data(3);
    obj2.set_data(4);

    fun(obj1,obj2);
    return 0;
}

// friend function can be written either public or private no difference at all