#include<iostream>
#include<climits>

using namespace std;

int getMax(int numArray[],int size){
    int maxi = INT_MIN;

    for(int i=0;i<size;i++){
        // // Hard way of checking min
        // if (numArray[i]>maxi)
        // {
        //     maxi = numArray[i]; 
        // }

        // easy built in function
        maxi = max(maxi,numArray[i]);
    }
    return maxi;
}

int getMin(int numArray[],int size){
    int minx = INT_MAX;

    for(int i=0;i<size;i++){
        // // Hard way of checking min
        // if (numArray[i]<min)
        // {
        //     min = numArray[i]; 
        // }

        // // built in way of checking max of two
        minx =  min(minx,numArray[i]);
    }
    return minx;
}

int main(){
    int size;
    cin>>size;

    int arr[100];

    // taking inputs 
    cout<<"\ntaking inputs\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Max: "<<getMax(arr,size);
    cout<<endl;
    cout<<"Min: "<<getMin(arr,size);
    return 0;
}