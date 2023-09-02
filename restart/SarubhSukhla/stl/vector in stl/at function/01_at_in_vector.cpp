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
    
    cout<<"\nValue at index 3 is:"<<v1.at(3)<<endl;

    return 0;
}