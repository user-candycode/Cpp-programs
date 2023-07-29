// 0 is false and any non zero value is true in c/c++
#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic_array[4] = {1,2,4,5};
    array<int,4> stl_array={1,2,4,5};
    // both the above array implementations are static

    for (int i = 0; i < stl_array.size(); i++)
    {
        cout<<stl_array[i]<<",";
    }
    cout<<endl;

    //print an array at index 2
    cout<<"Element at index 2 is: "<<stl_array.at(2)<<endl;
    // check if array is empty
    cout<<"Empty or not?: "<<stl_array.empty()<<endl;
    //print the first element of an array
    cout<<"First element: "<<stl_array.front()<<endl;
    //print the last element of an array
    cout<<"Last element: "<<stl_array.back()<<endl;
    return 0;
}