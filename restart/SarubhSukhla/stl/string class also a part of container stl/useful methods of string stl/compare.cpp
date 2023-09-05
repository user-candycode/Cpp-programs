#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="Amar";
    string s2="Amit";
    int i = s1.compare(s2);
    cout<<"Compare: "<<i<<endl; // returns 0 for true or identical string values and -1 it not same string
    // returns 1 for similar strings but for case sensitivity they are not called identical
    return 0;
}