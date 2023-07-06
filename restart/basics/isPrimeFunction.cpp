#include<iostream>

using namespace std;

// prime == 1
// not prime == 0
// also for c base language 0 is false and any non zerovalue is true
bool isPrime(int n){
    for (int i = 2; i <=(n/2); i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    int n;
    cin>> n;
    int ans = isPrime(n);
    cout<<"checking.....\n"<<ans<<endl;
    if(ans == 1){
        cout<<"is a prime: "<<endl;
    }else{
        cout<<"not a prime: "<<endl;
    }
    return ans;
}