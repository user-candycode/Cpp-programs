#include<iostream>

using namespace std;

int main(){
    /*
        Bitwise Operators
        AND --> &
        OR  --> |
        NOT --> ~
        XOR --> ^

    int a=3,b =4;
    //3 = 11
    //4 =100 
    cout<<"a:\t"<<a<<endl<<"b:\t"<<b<<endl;
    cout<<"a&b:\t"<< (a&b) <<endl;
    cout<<"a|b:\t"<<(a|b)<<endl;
    cout<<"~a:\t"<<(~a)<<endl;
    cout<<"~b:\t"<<(~b)<<endl;
    cout<<"a^b:\t"<<(a^b)<<endl;
    */

    /*
        Left Shift Operator
        int n=5;    
    // Left Shift(move the bits left and padd 0 in case of +ive numbers)
    // 5 ---------> 0000 0000 0000 0101
    // 5  <<  1  =  000 0000 0000 01010 ------->10
    // ^DATA  ^No of bits to be shited left
    cout<<"5<<1:\t" <<(n<<1)<<endl;
    // LEFT SHIFT is multipline n by 2 in general(Except in case of second leftmost bit is 1(i.e making the number negative))



        Right Shift Operator
        int m=10;
    // RIGHT SHIFt (move the bits to right and padd 0 in case of +ive numbers)
    // 10 ----------> 0000 0000 0000 1010
    // 10  >> 1  =   0000 0000 0000 0101 ------->5
    // ^DATA  ^No of bits to be shited right
    cout<<"10>>1:\t" <<(n>>1)<<endl;
    // In case of Right shift the data n half's 

    */

    /*
        // In case of -ive numbers the padding is decided by compiler (i.e compiler dependent)
    int n=17;
    cout<<"Left Shift:"<<endl;
    cout<<"17<<1:\t"<<(n<<1)<<endl;
    cout<<"17<<2:\t"<<(n<<2)<<endl;

    cout<<"Right Shift:"<<endl;
    cout<<"17>>1:\t"<<(n>>1)<<endl;
    cout<<"17>>2:\t"<<(n>>2)<<endl;

    */
    
    /*
        // Pre increment and post increment
    int n=4;
    // n++;
    ++n;
    cout<<n<<endl;
    */
    
    int a,b=1;
    a=10;
    if(++a){
        cout<<b;
    }else{
        cout << (++b);
    }

    return 0;
}