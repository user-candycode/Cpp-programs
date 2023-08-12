#include<iostream>
using namespace std;

/* old way without template
int big(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int big(double a,double b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<big(2,4);
    cout<<big(5.6,3.4);

    return 0;
}
*/

// new way
template <class X> // x is a placeholder and will be automatically swaped with correct corrosponding data type by compiler
X big(X a,X b){
//   keyword^   ^Placeholder
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<big(2,4)<<endl;
    cout<<big(5.6,3.4)<<endl;

    return 0;
}

// template <class type> type funct_name(type arg1,type arg2, ...){}
// type depends on what kind of value is being passed automatically
// during early binding