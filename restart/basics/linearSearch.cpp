#include<iostream>
using namespace std;

void linearSearch(){
    int arr[5] = {1,2,3,4,5};
    int find = 4;

    for(int i=0;i<5;i++){
        if(arr[i]==find){
            cout<<"index: "<<i<<endl;
            break;
        }
    }

}

int main(){
    linearSearch();
    return 0;
}