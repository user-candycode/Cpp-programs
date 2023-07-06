#include<iostream>

using namespace std;

// functions are well defined tasks that produces an output, tey may or may not require an input

int pow(int x,int y){
    int ans=1;
    for(int i=1; i<=y; i++){
        ans = ans * x;
    }
    return ans;
}


int main(){
    

    /*
        // DUMB REPEATATIVE WAY pow(a,b)
    int a,b;
    a=2;
    b=0;
    int pow=1;
    for(int i=1; i<=b; i++){
        pow = pow * a;
        }
    cout<<" answer is "<<pow<<endl;
    */

    int a,b;
    cin>>a>>b;
    int ans =pow(a,b);
    cout<<"the answer is: "<<ans<<endl;
    return ans;
}