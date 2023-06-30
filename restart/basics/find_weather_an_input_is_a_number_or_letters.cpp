#include<iostream>
using namespace std;

int main(){
    // 48 == 0
    // 57 == 9
    // 65 == A
    // 90 == Z
    // 97 == a
    // 122 == z
    
    
    char ch;
    cout<<"Enter a character:\t";
    ch = cin.get();
    
    int i=0;
    i=ch;
    
    if(i>=97){
        cout<<"In range of a-z"<<endl;
    }
    else if(i>=65){
        cout<<"In range of A-Z"<<endl;
    }
    else if(i>=48){
        cout<<"In range of 0-9"<<endl;
    }else{
        cout<<"Not what we are trying to compare"<<endl;
    }

    return 0;
}
    