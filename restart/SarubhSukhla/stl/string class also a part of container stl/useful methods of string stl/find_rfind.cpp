#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Hello Online Online Students";
    {
        int i = s1.find("Online"); // returns first occurance of the find from left to right for duplicates
        cout<<i<<endl;
    }
    cout<<endl;
    {
        int i = s1.find("online"); // will return -1 for not found
        cout<<"find: "<<i<<endl;
    }
    {
        // reverse find
        int i = s1.rfind("Online"); // returns first occurance of the find from right to left for duplicates
        cout<<"rfind: "<<i<<endl;
        // gets the word from last then displays the first character index of this found word
    }
    return 0;
}