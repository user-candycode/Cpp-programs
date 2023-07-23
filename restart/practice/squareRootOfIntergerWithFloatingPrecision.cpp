#include<iostream>

using namespace std;

int square_root(int n){
    int ans=1;
    int low = 1;
    int high = n/2 + 1;
    while(low<high){
        int mid = high + (low-high)/2;
        if((mid*mid)<=n){
            low = mid;
            ans = low;
        }else{
            high = mid - 1;
        }
        
    }
    return ans;
    // number line approach where there is a definate answer to be found at some point on this number line
}

int main(){
    int num;
    num = 9;

    cout<<square_root(num)<<endl;
    return 0;
}