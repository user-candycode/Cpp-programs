#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,7,6,0,10,9,14};
    
    for (int i = 0; i < arr.size()-1; i++)
    {
        int didswap=0;
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }    
        if(didswap==0){
            break;
        }
    }
    

    //printing arr
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<",";
    }
    //the lowest value bubbles up to the top every single iteration
    return 0;
}