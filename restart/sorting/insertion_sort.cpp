#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(int n, vector<int> &arr){

    for (int i = 0; i < n; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
    //  walking with i finding an element i<i-1 then swap backwards in the array until i>0 where last swap can only be arr[1] i.e i and arr[0] i.e i-1 hence i>0 condition
}

int main(){
    vector<int> arr={4,3,6,7,2,9,1,10,0};
    int n=arr.size();
    
    insertion_sort(n,arr);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}