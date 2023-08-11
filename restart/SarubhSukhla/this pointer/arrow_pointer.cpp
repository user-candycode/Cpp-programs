#include<iostream>
using namespace std;

class Box{
    private:
        int l,b,h;
    public:
        Box(int x){
            cout<<"object of "<<x<<endl;
        }
        void setDimension(int x, int y, int z){
            l=x;
            b=y;
            h=z;
        }
        void showDimension(){
            cout<<"l: "<<l<<" b: "<<b<<" h: "<<h<<endl;
        }
};

int main(){
    Box smallBox=1;
    smallBox.setDimension(12,20,5);
    smallBox.showDimension();
    Box* p;
    p = &smallBox;
    p->setDimension(2,2,15);
    p->showDimension(); 
    // dot works with object but arrow works with pointers
    return 0;
}