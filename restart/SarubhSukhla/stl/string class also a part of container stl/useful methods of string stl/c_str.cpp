#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    string s1 = "Hello";
    char str[20];
    strcpy(str,s1.c_str());
//Cstring^         ^ converting s1(a C++ string) to C String
    {
        cout<<s1.size()<<endl;
    }
    return 0;
}