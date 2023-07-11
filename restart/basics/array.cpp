#include<iostream>

using namespace std;

void inputArray(int arr[]){
    cout<<"taking input of an array: "<<endl;
    int size=0;
    cout<<"give the size of your array: ";
    cin>>size;

    for(int i=0;i<size;i++ ){
        cin>>arr[i];
    }
    cout<<"taking input done, returning to operations."<<endl;
}

void printArray(int array[],int size){
    
    cout<<"Printing the array...."<<endl;
    
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\nPrinting Done."<<endl;
}

void countNonGarbageValues(int a[]){
    bool count=0;
    int size = 1;
    for(int i = 1; i<1000; i++){
        // if(a[i-1]!=0 || a[i]!=0){
        //     size++;
        // }
        if(a[i]==0){
            count=true;
        }
        if(a[i]!=0){
            count=false;
        }
        if(count==0){
            size++;
        }
    }
    cout<<"size: "<<size-1<<endl;
}

void revArr(int arr[],int size){
    int start =0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]); //swap is a built in function
        start++;
        end--;
    }
}

void swapAlternative(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if( (i+1)<size ){
            swap(arr[i],arr[i+1]);
        }
    }
}

void findUnique(){

}

void findDuplicate(){

}

void arrayIntersection(){
    // input gets 2 array
}

void pairSum(){

}

void tripletSum(){

}

void sortZerosAndOnes(){
    
}

int main(){

    // int arr[15];
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>arr[i];
    // }


//  // initilizing an array with all zero values
    // int arr[10]={0};
    // int size = 10;
    // printArray(arr,size);

//  counting non garbage values
    // int arr[1000] = {0};

    // inputArray(arr);
    // printArray(arr,1000);
    // countNonGarbageValues(arr);
    

    // int arr[6]={1,4,0,5,-2,15};
    // int brr[5]= {2,6,3,9,4};
    // cout<<"\nfirst array......"<<endl;
    // revArr(arr,6);
    // printArray(arr,6);
    // cout<<"\nsecond array....."<<endl;
    // revArr(brr,5);
    // printArray(brr,5);

// swap alternative
    // int arr[10]={3,5,7,3,2,9,4};
    // int size = 7;
    // swapAlternative(arr,size);
    // printArray(arr,size);




    cout<<endl; 
    return 0;
}