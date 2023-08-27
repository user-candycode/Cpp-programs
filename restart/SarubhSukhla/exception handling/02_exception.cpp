/*
    try{

    }
    catch(type arg1){

    }
*/

#include<iostream>

using namespace std;

int fun(){
    throw 10;
    return 0;
}

int main(){
    cout<<"welcome"<<endl;
    int i=4;
    try{
        if(i==1){
            throw 1;
        }
        if(i==2){
            throw 2;
        }
        if(i==3){
            throw 3;
        }
        if(i==4){
            fun();
        }
        else{
            throw 10;
        }// never leave empty throw otherwise run time error and no catch will ever run
        
        cout<<"In try"<<endl;
    }
    catch(int e){
        cout<<"In exception no: "<<e<<endl;
    }
    catch(double e){
        cout<<"In exception no: "<<e<<endl;
    }
    cout<<"last Line"<<endl;
    return 0;
}