#include<iostream>
#include<array>

using namespace std;

int main(){
    array <int,8> data_array = {11,22,33,44,55};
    cout<<data_array.at(2)<<endl;
    cout<<data_array[2]<<endl;
    cout<<data_array.front()<<endl;
    cout<<data_array.back()<<endl;

    for (int i = 0; i < 8; i++)
    {
        cout<<data_array[i]<<"\t";
    }cout<<endl;
    data_array.fill(10);
    for (int i = 0; i < 8; i++)
    {
        cout<<data_array[i]<<"\t";
    }
    
    return 0;
}