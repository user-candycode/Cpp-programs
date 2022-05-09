#include<iostream>

using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        int j;
        for(j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}