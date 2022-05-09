#include<iostream>

using namespace std;

int main(void){
    char button;
    cout<< "input a character" <<endl;
    cin >> button;

    switch (button)
    {
    case 'a':
    case 'A':
        cout << "hello!" <<endl;
        break;
    case 'b':
    case 'B':
        cout << "nameste!" <<endl;
        break;
    case 'c':
    case 'C':
        cout << "salut!" <<endl;
        break;
    case 'd':
    case 'D':
        cout << "ciao!" <<endl;
        break;
    
    
    default:
        cout << "chose one amoung a,b,c,d"<< endl;
        break;
    }

    return 0;
}