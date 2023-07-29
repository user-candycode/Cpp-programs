#include<iostream> // declaration of cin and cout

using namespace std;

int main(){
    int in; // declaration statement
    cout<<"enter a number to be squared: "<<endl; // action statement
    cin>>in; // action statement

    int s=in*in; // dynamic initilization
    cout<<"square of "<<in<<" is "<<s<<"\n";    // action statement

    return 0; // return value of this main function
}
