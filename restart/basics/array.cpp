#include<iostream>

using namespace std;

void printArray(int array[]){
    int s = sizeof(array) / sizeof(array[0]);
    cout<<"\n"<<s<<"\n\n";
    cout<<"Printing the array...."<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\nPrinting Done."<<endl;
}


int main(){

    // int arr[15]={0,1};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


//  initilizing an array with all zero values
    int arr[10]={0};
    printArray(arr);




    cout<<endl; 
    return 0;
}