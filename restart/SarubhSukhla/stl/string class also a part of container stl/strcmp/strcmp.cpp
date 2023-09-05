#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[10] = "Hello";
    char s2[10] = "hello";

    int i = strcmp(s1,s2); // returns 0 for false and 1 for true
    cout<<i<<endl;

    {
        char s3[30];
        // s3 = s2 + s1; // illegal
        strcpy(s3,strcat(s1,s2));
        cout<<s3<<endl;
    }

    // Note: Since defining a class in c++ is creating a new data type, string is derived data type
    // this means operators can be overloaded for the string class
    // Also A string class is a childe class of basic_string class in c++
    // string is safer than using raw char array
    return 0;
}