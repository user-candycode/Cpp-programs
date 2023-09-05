#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Hello";
    char str[]=" students";
    string s2;
    s2 = s1 +str; //note even this works //here U can mix string obj with another string obj or c style string
    cout<<s2<<endl;

    string s3;
    s3 = s1 + 'A'; 
    cout<<s3<<endl; // in c++ string can also be concatinate with character constant
    return 0;
}