#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(10*(i+1));
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<",";
    }
    
    cout<<endl;
    cout<<"Element at front is: "<<v1.front()<<endl;
    cout<<"Element at back is: "<<v1.back()<<endl;

    return 0;
}