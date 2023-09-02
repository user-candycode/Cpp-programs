#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(10*(i+1));
    }
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;

    //  removing the value from the last index
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    cout<<"Current Capacity is: "<<v1.capacity()<<endl;
    // Note the size of vector does not decreases even if you empty the vector
    
    return 0;
}