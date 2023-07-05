#include <iostream>

using namespace std;

int main()
{

    // int constant, ant;
    // constant = 4;
    // ant = 1;

    // switch(constant){
    //     case 1:
    //     case 2:
    //         cout<<" 1 2 "<<endl;
    //         break;
    //     // cout<<"##############################"<<endl; //this line will never run
    //     case 3:
    //         cout<<" 3 "<<endl;
    //         break;
    //     case 4: switch(ant){
    //                     case 1:
    //                         cout<<1<<endl;
    //                         break;

    //                 }
    //             break;
    //     default:
    //     cout<<"its a default"<<endl;
    // }

    // float a,b;
    // cin>>a>>b;

    // char opptor;
    // cin>>opptor;

    // float output;
    // switch(opptor){

    //     case '+':
    //         output = a+b;
    //         break;
    //     case '-':
    //         output = a-b;
    //         break;
    //     case '/':
    //         output = a/b;
    //         break;
    //     case '*':
    //         output = a*b;
    //         break;
    //     default:
    //         cout<<"Invalid operator used.";
    // }
    // cout<<"output = "<<output<<endl;

    int amount;
    cout << "Enter the Amount : " << endl;
    cin >> amount;

    int num = 1;
    int note = 0;

    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (note * 100);
        cout << note << " number of 100Rs note required" << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount - (note * 50);
        cout << note << " number of 50Rs note required" << endl;
    }
    case 3:
    {
        note = amount / 20;
        amount = amount - (note * 20);
        cout << note << " number of 20Rs note required" << endl;
    }
    case 4:
    {
        note = amount / 1;
        amount = amount - (note * 1);
        cout << note << " number of 1Rs required" << endl;
        break;
    }
    default:
        cout << "invalid amount" << endl;
        exit(0);
    }
    return 0;
}