// non contigous memory location 
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);


    // printing dqueue
    for(int i:d){
        cout<<i<<",";
    }cout<<endl;
//==================================================================================================================================
    cout<<"poping the dqueue:"<<endl;
    d.pop_back();
    // printing dqueue
    for(int i:d){
        cout<<i<<",";
    }cout<<endl;

//==================================================================================================================================
    cout<<"before erase:\t";
    // printing dqueue
    for(int i:d){
        cout<<i<<",";
    }cout<<endl;
    
    d.erase(d.begin(), d.begin()+3);

    cout<<"after erase:\t";
    // printing dqueue
    for(int i:d){
        cout<<i<<",";
    }cout<<endl;

//==================================================================================================================================

    return 0;
}