#include<iostream>

using namespace std;

// int first(){
//     fun(); // because of this the entire function will throw an error
//     return 0;
// }

int main(){
    void fun();
    cout<<"You are in main"<<endl;

    fun();
    return 0;
}

void fun(){
    cout<<"you are in fun"<<endl;
}