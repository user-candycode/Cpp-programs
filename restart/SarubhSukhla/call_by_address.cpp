#include<iostream>

using namespace std;

int sum(int*, int*);

int main(){
    int a=5,b=5;
    int s = sum(&a,&b);
    cout<<"sum is:\t"<<s;
    return 0;
}

int sum(int* p, int* q){  // formal arguments as pointers i.e pass by address
    return (*p+*q);
}