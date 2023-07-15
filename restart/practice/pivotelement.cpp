#include<iostream>

using namespace std;

int findPivotElement(int arr[],int size){
    // int ans=-1;
    int start =0;
    int end = size -1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid-1]>arr[mid] && arr[mid]<arr[mid+1]){
            return mid;
        }
        if(arr[start]<arr[mid]){
            start=mid;
        }else{
            end = mid;
        }
    }
    
    return -1;
}

int main(){
    int arr[]={6,7,9,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findPivotElement(arr,size);
    cout<<ans<<endl;
    return ans;
}