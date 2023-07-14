#include<iostream>

using namespace std;

int main(){
    int arr[] = {3,5,3,2,0};
    int size = 5;

    int start = 0;
    int end   = size - 1;

    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[mid-1] && arr[mid]>=arr[mid+1]){
            cout<<mid;
            return mid;            
        }else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
            start = mid + 1;
        }else if( arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
            end = mid;
        }
        
    }
    return 0;
}