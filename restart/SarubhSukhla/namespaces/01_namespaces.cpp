// include<iostream> iostream i.e header file only contains the declarations not the defination
// definations are present in library files

#include<iostream>

// namespace is a container for identifers
// it puts the names of its members in a distinct space so that they dont conflict with the names in other 
// namespaces or global namespaces 
namespace MySpace{
    // declarations
}
namespace ms=MySpace; //alias
// namespace defination doesent termination with a semicolon like in class defination 
// the namespaces defination must be done at the global scope or nested inside another namespace
// you can use alias name for your namespace name for ease of use
// namespace ms=Myspace;

int main(){
    // remember that namespace or its alias is not a class so no instance member can't be created

    return 0;
}

// there can be unnamed namespaces too
/*
    namespace{
        // decalration
    }
*/

// namespace can be extended
// a namespace defination can be continued and extended over multiple files,they are not redefined or overrriden