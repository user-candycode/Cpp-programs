#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> customer;
    customer[100] = "Gazinder";
    customer[123] = "dilip";
    customer[145] = "aditya";
    customer[171] = "shahid";
    customer[200] = "Rajesh";

    map<int,string> c{ {100,"Gazinder"},{123,"dilip"} };

    
    return 0;
}

// map always arrange its keys in a sorted order(property of a map)
// map are used to replicate associative arrays
// map contains sorted key value pairs, in which each key is unique and cannot be changed and it can be
// inserted or deleted but cannot be altered  
/*
    useful functions of map class
    at()
    []
    size()
    empty()
    insert()
    clear()
*/