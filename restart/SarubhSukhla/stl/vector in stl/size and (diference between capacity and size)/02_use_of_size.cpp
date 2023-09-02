#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;
    cout<<"Current size is: "<<v1.size()<<endl;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(10*(i+1));
    }
    cout<<"Current size is: "<<v1.size()<<endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<",";
    }
    
    
    return 0;
}