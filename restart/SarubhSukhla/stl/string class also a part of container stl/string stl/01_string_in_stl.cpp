#include<iostream>
#include<string> // one of the container template in stl

using namespace std;

int main(){
    // char s1[10]; // old way
    string s1 = "hello";
//  ^class  ^ object of the class
    // string is just another container class in standard template library
    {
        // string class support many constructor 
        // -string()
        // -string(const char* str)
        // -string(const string &str)
        string s2 = "Hello"; // Or string s2("Hello"); // Or string s2 = string("Hello");
    }
    {
        string s1;
        char str[] = "Hello";
        string s2(str);
        string s3(s2); // Or string s3 = s2;
    }
    {
        // + for concatination
        // = for strcpy
        // == strcmp
        // << and >> insertions and extraction operator
    }
    return 0;
}