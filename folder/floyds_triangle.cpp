#include<iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int counter = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << counter << "\t";
            counter++;
        }
        cout<<endl;
    }
    return 0;
}