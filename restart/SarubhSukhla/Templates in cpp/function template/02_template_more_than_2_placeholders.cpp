#include<iostream>

using namespace std;

template <class X,class Y> 
X big(X a,Y b){
//   keyword^   ^Placeholder
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<big(2,4.5)<<endl;
    cout<<big('c',3.4)<<endl;

    return 0;
}