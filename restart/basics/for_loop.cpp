#include<iostream>

using namespace std;

int main(){
   /*
        // Simple understanding for loop

         int n;
    cout<< "Enter the value of n"<<endl;
    cin>>n;


    cout<<"printing count from 1 to n"<<endl;
    // for(int i=1; i<=n; i++){
    //     cout<<i<<endl;
    // }
    int i=1;
    for(; ; ){
        if(i<=n){
            cout<<i<<endl;
        }else{
            break;
        }
        i++;
    }
   */

    /*
        // complex understanding for loop


    for(int a=0, b=1; a>=0 && b>=1; a--, b--){
        cout<<a<<" "<<b<<endl;
    }
    */

    /*
        sum of numbers upto n

        int n= 5;
    int sum =0;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Sum of n numbers: "<<sum<<endl;
    */

   /*
        // fibonacci series using for loop
        // uses sum
                a=0
                b=1
            then
                a=b
                b=sum
                loop to sum

        int n = 10;
    // cin >> n;

    int sum=0;
    int a=0, b=1;
    if(n<1){
        cout<<0;
    }else{
        cout<<a<<" "<<b<<" ";
        for(int i=1; i<=n; i++){

        int next_number = a+b;
        cout<<next_number<<" ";
        
        a=b;
        b=next_number;
    }
    }    
   */


    /*
        // check weather a number is a  prime numbers
    */

    int n=101;
    bool flag=true;
    for(int i=1; i<=(n/2); i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    cout<< flag;
    flag =false;
    cout<< flag;
    
    if(flag==true){
        cout<<"is prime";
    }else{
        cout<<"is not prime";
    }
    
    return 0;
}