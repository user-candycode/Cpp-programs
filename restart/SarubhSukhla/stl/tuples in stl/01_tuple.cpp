#include<iostream>
#include<tuple>
using namespace std;

int main(){
    // defining and initilizing a tuple
    tuple<string,int,int>t1;
    t1=make_tuple("rahul",15,30);

    // Accessing the values of a tuple
    cout<<get<0>(t1)<<endl;
    //        ^position in tuple to tell which data
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    return 0;
}

// Note: we can compare two type of tuples, i.e comparision operators works on this one