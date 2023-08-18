#include<iostream>
using namespace std;

class Dummy{
    private:
        int a,b,*p;
    public:
        void setData(int x, int y,int z){
            a=x;
            b=y;
            *p=z;
        }
        void showData(){
            cout<<"a:"<<a<<"\nb:"<<b<<endl;
        }
        Dummy(Dummy &d){ //invokes deep copy
            a=d.a;
            b=d.b;
            p=new int;
            *p=*(d.p);
        }
        Dummy(){

        }
};

int main(){
    int z=11;
    Dummy d1;
    d1.setData(3,4,5);
    Dummy d2=d1;  // copy using copy constructor
    d2.showData();
    return 0;
}