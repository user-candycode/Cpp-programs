#include<iostream>

using namespace std;

int sum(int,int);

int main(){
    int a=5,b=6;
    int s= sum(a,b);  // here a and b are actual arguments 
    cout<<"sum is: "<<s<<endl;
    return 0;
}

int sum(int x, int y){  //here x and y are formal arguments 
    return (x+y); 
}

//formal arguments can be of 3 types
/*
    1.ordinary variables of any type
    2.pointer variables
    3.reference variables
*/