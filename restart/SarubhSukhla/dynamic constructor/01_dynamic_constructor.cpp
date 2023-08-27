#include<iostream>

using namespace std;

class A{
    private:
        int a,b;
        int *p;
    public:
        A(){
            a=0;
            b=0;
            p = new int; // dynamic allocation of memoru as the constructor ran hence dynamic constructor
            cout<<"constructor 1 ran"<<endl;
        }
        A(int x, int y, int z){
            a=x;
            b=y;
            p = new int;
            *p = z;
            cout<<"constructor 2 ran"<<endl;
        }
};

int main(){
    A o1,o2,o3(2,3,4);
    return 0;
}

// Note: first object is called them memory is alloted to the object then constructor is ran