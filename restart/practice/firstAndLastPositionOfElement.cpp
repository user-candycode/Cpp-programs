#include<iostream>

using namespace std;

int binarySearch(int arr[],int size,int target,bool f){
    int start = 0;
    int end   = size - 1;
    int ans = -1;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(arr[mid]==target){
            ans = mid;
            if(f==0){
                end = mid - 1; //left occurance
            }
            if(f==1){
                start = mid + 1; // right occurance
            }
        }
        if(arr[mid]<target){
            start = mid + 1;
        }
        if(arr[mid]>target){
            end = mid-1;
        }
    }
    return ans;
}



int main(){
    int arr[] = {2,4,10,10,10,18,20};
    // cout<< sizeof(arr)/sizeof(int);
    bool flag;
    int target = 10;
    int size = 7;
    // first occurance
    flag = 0;
    int first = binarySearch(arr,size,target,flag);
    // last occurance
    flag = 1;
    int last = binarySearch(arr,size,target,flag);
    cout<<first<<" "<<last<<endl;
    return 0;
}