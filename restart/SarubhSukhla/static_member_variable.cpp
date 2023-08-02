#include<iostream>

using namespace std;


class Account
{
private:
    int balance;    // instance member variable
    static float roi;   // static member variable  OR  Class variable // just declaration here will not grant the static memory to this variable
public:
    void setBalance(int b){
        balance = b;
    }
};

float Account::roi=3.5f;  // defining static member variables

int main(){
    Account a1,a2;  // roi can only be one no matter the number of objects of a class
    return 0;
}