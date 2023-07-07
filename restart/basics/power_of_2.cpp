#include<iostream>
// #include<cmath>
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
    //16 0001 0000
}

int main(){
    // method1(1);
    method2(16);
    return 0;
}