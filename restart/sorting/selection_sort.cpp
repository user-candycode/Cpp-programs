#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={29,72,98,13,13,87,66,52,51,36};
    // printing vector array
    cout<<"before:\t";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    // pick first element then find the smallest element in the rest of the array and swap at the end then continue the cycle for i+1 element
    int i=0;
    while (i<arr.size())
    {
        int small = i;
        int j=i+1;
        while (j<arr.size())
        {
            if(arr[small]>arr[j]){
                small = j;
            }
            j++;
        }
        swap(arr[small],arr[i]);
        i++;
    }
    
    // printing vector array
    cout<<"after:\t";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<",";
    }
    
    return 0;
    // O(n^2) small memory footprint
}
