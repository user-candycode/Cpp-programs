#include<iostream>
using namespace std;

class Box{
    private:
        int l=-1,b=-1,h=-1;
    public:
        void setDimension(int l,int b,int h){
            this->l=l;
            this->b=b;
            this->h=h;
        }
        void showDimension(){
            cout<<"l: "<<l<<" b: "<<b<<" h: "<<h<<endl;
        }
};

int main(){
    Box smallBox;
    smallBox.setDimension(23,45,67);
    smallBox.showDimension();
    return 0;
}