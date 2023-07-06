#include<iostream>

using namespace std;

int factorial(int n){
    int ans =1;
    for (int i=1; i<=n; i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){
    int nCr;
    nCr = factorial(n)/( (factorial(r)) * (factorial(n-r)) );

    return nCr;
}

int main(){
    int n=8,r=2;
    int ans = nCr(n,r);

    cout<<"nCr is: "<<ans;
    return ans;
}

