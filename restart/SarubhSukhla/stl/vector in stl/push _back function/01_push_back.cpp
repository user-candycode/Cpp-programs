#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;
    cout<<"Current Capacity is: "<<v1.capacity()<<endl; // at just the declaration the vector capacity is 0
    v1.push_back(10); // insert 10 at index 0 and changes the capacity to 1
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    v1.push_back(30);
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    v1.push_back(40);
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    v1.push_back(50);
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    return 0;
}