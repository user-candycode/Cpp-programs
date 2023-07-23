#include<iostream>

using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid;
    if( (size%2)!=0){
        mid = (start + end)/2;
    }else{
        mid = ((start + end) / 2) + 1;
    }
    

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    // binary search
    // uses start , end pointers
    
    int arr[]= {3,5,9,13,27};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    int ans = binarySearch(arr,size,key);
    cout<<"Key "<<key<<" is at index: "<<ans<<endl;
    
    return 0;
}