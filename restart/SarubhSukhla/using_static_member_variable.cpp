#include<iostream>

using namespace std;


class Account
{
private:
    int balance;    // instance member variable
    static float roi;   // static member variable  OR  Class variable // just declaration here will not grant the static memory to this variable
public:
    // static float ior;
    void setBalance(int b){
        balance = b;
    }
    static void setRoi(float r){ //static member function // can only access static member 
        roi = r;
    }

};

float Account::roi;  // defining static member variables
// float Account::ior=4.0f;

int main(){
    Account a1,a2;  // roi can only be one no matter the number of objects of a class
    // float x = Account::ior=4.5f;
    // cout<<x;
    a1.setRoi(4.6f);
    Account::setRoi(4.5f);
    return 0;
}