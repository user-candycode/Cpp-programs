#include<iostream>

using namespace std;

int main(){
    int x = 4;
    float y;
    y=x;    // automatic type conversion

    float y=3.4;
    int x;
    x=y;    // automatic type conversion 

    // ===============================================
    /*
    Complex c1;
    int x=5;
    c1=x;   // error
    */
    // ===============================================
    return 0;
}