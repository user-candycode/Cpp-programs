#include<iostream>

using namespace std;

class Dummy
{
private:
    int a,b;
    const int x;
    int &y;
public:
    Dummy(int &n):a(5),b(6),x(6),y(n){

    }
    ~Dummy();
};


int main(){
    const int k=5;
    // k++; // invalid as value of const cant change throught the program
    int m=6;
    Dummy d1(m);
    return 0;
}

/*  
    Q.what is initilizers?
    Initilizers List is used to initilize data members of a class 
    The list of members  to be initilized is indicated with constructor as a comma seperated list 
    followed by a colon.
*/

// const variables are initilized at the time of its declaration
// initilizer concept came because of const variable

/*
    There are situations where initilization of data members inside constructor doesent work 
    and initilizer List must be used.
    --For initilization of non static const data members
    --For initilization of reference members
*/