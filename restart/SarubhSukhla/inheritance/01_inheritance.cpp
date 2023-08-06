#include<iostream>

using namespace std;

class A{
    private:
        int a;
    protected:
        void set_value(int k){
            a=k;
        }
};

class B: public A{
    public:
        void set_data(int x){
            set_value(x);
        }
};


int main(){
    B obj;
    obj.set_data(3);
    return 0;
}