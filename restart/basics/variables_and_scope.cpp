#include<iostream>

using namespace std;

int main(){
    // int a;
    // cout<<a<<endl;

    /*
    int a = 3;
    cout<<a<<endl;

    //int a; initilizing again will give an error but within some local scope
    {   
        int a=5;
        cout<<a<<"\n";

        int b = 21; // this b cant be accessed outside of this block
    }
    // cout<<b<<endl; //this will give an error

    cout<<a<<endl;
    
    if(true){
        int a = 10;
        cout<<a<<endl;
    }

    cout<<a<<endl;
    

    cout<<"\n";
    */

   // scope with for loop

   int i=5; // for loop will use its own initilization of a variable first
    
   for (int i = 0; i < 10; i++)
   {
    cout<<i<<" = hi"<<endl;
   }
   
    
    return 0;
}