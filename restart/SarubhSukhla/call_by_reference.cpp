#include<iostream>

using namespace std;

int referFunSum(int &,int &);

int main(){
    int a=5, b=4;

    int s=referFunSum(a,b);
    cout<<"sum is: "<<s;

    return 0;
}

int referFunSum(int &p,int &q){
    return (p+q);
}