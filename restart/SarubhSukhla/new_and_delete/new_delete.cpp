// use for dynamic memory allocation
#include<iostream>
using namespace std;

class Complex{

};
int main(){
    int *p = new int;
    float *q = new float;
    Complex *ptr = new Complex;

    // ARRAY
    float *x = new float[5];
    // ARRAY with user defined length
    int y;
    cin>>y;
    int *p = new int[y];
    return 0;
}