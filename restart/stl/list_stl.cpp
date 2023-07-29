#include<iostream>
#include<list>
using namespace std;

int main(){
//=====================================================================================================================================
    // defining/initilizing the list
    list<int> l;

    // adding elements to a list
    l.push_back(1);
    l.push_front(2);

    // printing the list
    for(int i:l){
        cout<<i<<",";
    }cout<<endl;

//=====================================================================================================================================
    cout<<"before erase:\t";
    // printing the list
    for(int i:l){
        cout<<i<<",";
    }cout<<endl;


    // erase an element
    l.erase(l.begin());
    
    cout<<"after erase:\t";
    // printing the list
    for(int i:l){
        cout<<i<<",";
    }cout<<endl;

//=====================================================================================================================================
    
    return 0;
}