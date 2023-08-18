#include<iostream>
using namespace std;

class Dummy{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a=x;
            b=y;
        }
        void showData(){
            cout<<"a:"<<a<<"\nb:"<<b<<endl;
        }
};

int main(){
    Dummy d1;
    d1.setData(3,4);
    Dummy d2=d1;  // copy using copy constructor
    d2.showData();


    Dummy d3;
    d3=d1; // copy assignment operator
    return 0;
}