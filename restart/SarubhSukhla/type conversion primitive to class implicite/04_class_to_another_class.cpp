#include<iostream>

using namespace std;

class Product; // declaration of a class
class Item;    // declaration of a class
class Product{
    private:
        int m,n;
    public:
        void setData(int x,int y){
            m=x;
            n=y;
        }
        int getM(){
        return m;
        }
        int getN(){
            return n;
        }
        /*
        operator Item(){
            Item temp;
            temp.a=m;
            temp.b=n;
            return temp;
        }
        for this constructor needs to be created in item class
        */
};

class Item{
    private:
        int a,b;
    public:
        void showData(){
            cout<<"a:"<<a<<"\nb:"<<b<<endl;
        }
        // old way using constructor, but this will give an error because m,n are private variables in another class
        Item(){}
        Item(Product p){
            a=p.getM();
            b=p.getN();
        }
       
};



int main(){
    Item i1;
    Product p1;
    p1.setData(4,5);

    i1=p1;

    i1.showData();
    return 0;
}