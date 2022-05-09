#include<iostream>

using namespace std;

int main(void){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//checking weather a input of a number is prime or not
    // int n;
    // cin >> n;
    // int i;
    // if(n==0 || n==1){
    //     cout << "its a non prime" << endl;
    //     exit(1);
    // }
    // for(i=2; i<n; i++){
    //     if(n%i==0){
    //         cout << "its a non prime" << endl;
    //         break;
    //     }
    // }
    // if(i==n){
    //     cout<<"Prime number"<<endl;
    // }




// printing prime numbers between a given range
    int a,b;
    cin >> a >> b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<< num << endl;
        }
    }
    return 0;
}