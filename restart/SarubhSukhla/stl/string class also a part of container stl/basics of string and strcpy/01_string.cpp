#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[10] = "Hello";
    char s2[10] = "World";
    cout<<s<<" "<<s2<<endl;
    // up till index 4 it will store hello, then 0 which is ascii code for null '\0'
    // so the final character array will be |h|e|l|l|o|0|0|0|0|0|.
    // so in c and c++ the last character is null for any string
    {
        // null terminated character arrays are not technically data types, so c++ operator cant be applied
        // s2 = "Dunia"; // illegal in c/c++
        strcpy(s2,"Duniya"); // correct way of assigning a string to a char variable
        cout<<s<<" "<<s2<<endl;
    }
    {
        char s3[10];
        // s3 = s2; // illegal in c++
        // s3 > s2; // illegal in c++
        // s3=s1+s2; // illegal in c++
    }
   
    return 0;
}