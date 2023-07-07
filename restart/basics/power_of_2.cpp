#include<iostream>
#include<cmath>
using namespace std;

void method1(int n){
    // divide by 2
    // say n = 16
    // 16 8 4 2 1 0

    int ans=2;
    while (ans<n)
    {
        ans = ans*2;     
        // cout<<"ans: "<<ans<<endl;
    }

    if(ans == n || n==1){
        cout<<"is in power of 2"<<endl;
    }else{
        cout<<"not in the power of 2"<<endl;
    }  
}


void method2(int n){
    // Initilizing a variable x with 1 and Leftshifting the x until x==n also if temp == x i.e  x&n gives back again x,
    // means its not match so inc count.
    //16 0001 0000
    //15 0000 1111
    //21 0001 0101
    int temp;
    int x = 1;
    int counter = 0;
    
    while (x<=n)
    {
        temp = n & x;
        if (temp==x)
        {
            counter++;
        }
        x = x<<1;
    }
    cout<<"counter: "<<counter<<endl;
}

void method3(int n){
    // 16 0001 0000
    // 01 0000 0001
    
    int x = n;
    while (x>1 && (n&1)==0)
    {
        x=x>>1;
    }
    
    if(n==1 || n!=0){
        cout<<"is in power of 2"<<endl;
    }else{
        cout<<"is not in power of 2"<<endl;
    }
    cout<<"does not work got bored"<<endl;
}

void method4(int n){
    bool temp = floor(log2(n))==ceil(log2(n)) ? true:false;
    if(temp && n!=0){
        cout<<"is in power of 2"<<endl;
    }else{
        cout<<"is not in power of 2"<<endl;
    }

}

int main(){
    int num;
    // num=16;
    num=1;
    // num=0;
    // num=8;
    // num=15;
    // num=21;


    // method1(num);
    // method2(num);
    // method3(num);

    method4(num);
  

    return 0;
}