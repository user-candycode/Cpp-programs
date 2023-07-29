// dynamic array type storage that doubles it capacity when it becomes full
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector when just initilized has memory 0
    vector<int> v;
    // printing the just initilized vector capacity
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

//====================================================================================================================
    
    // inserting an element at the back
    v.push_back(1);
    // printing the vector capacity
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;


    // inserting an element at <<"size: "the back
    v.push_back(3);
    // printing the vector capacity
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;


    // inserting an element at <<"size: "the back
    v.push_back(5);
    // printing the vector capacity
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

//====================================================================================================================

    //{ 1 , 3 , 5 }

    // print element at index 2
    cout<<"element at index 2: "<<v.at(2)<<endl;

    //printing element at the back
    cout<<"elecment at the back of the vector: "<<v.back()<<endl;

    //printing element at the front
    cout<<"elecment at the front of the vector: "<<v.front()<<endl;

//====================================================================================================================

    // printing vector before the pop
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    
    // printing vector after popping
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

//====================================================================================================================
    cout<<"size before clearing a vector: "<<v.size()<<endl;
    //clearing a vector(clears the vector elements not the actual memory on disk by the vector)
    v.clear();
    cout<<"size after clearing a vector: "<<v.size()<<endl;

//====================================================================================================================
    //vector initilization with size
    //                , initilize default element value for this vector
    vector<int> arr(5,1);
    //              ^ size of the vector
    // ptining this static vector
    for(int i:arr){
        cout<<i<<",";
    }cout<<endl;
//====================================================================================================================
    vector<int> arr1(5,0);
    //copying previous array to a new array
    vector<int> arr2(arr1);
    // printing new vector with copied values of arr1 in arr2
    for(int i:arr2){
        cout<<i<<",";
    }cout<<endl;
    
    return 0;
}