#include<iostream>

using namespace std;


int main(){
    cout<<"welcome"<<endl;
    try{
        throw 10;
        cout<<"\nIn Try"<<endl;
    }
    catch(...){  // for all cases this catch block will run 
        cout<<"this catch block will run for all throws"<<endl;
    }
    // catch(int e){
    //     cout<<"exception no:"<<e<<endl;
    // }
    cout<<"Last Line"<<endl;
    return 0;
}

// using only throw in code will automatically invoke termination function and the the program will exit explicitely
// catch is always used with try using throw