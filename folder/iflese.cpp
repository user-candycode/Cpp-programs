#include<iostream>

using namespace std;

int main(void){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif






// basic demostration of if else 
    // int savings;
    // cin >> savings;

    // if(savings>5000){
    //     if(savings>10000){
    //         cout<<"road trip with abc."<<endl;
    //     }else{
    //         cout<<"maholla Trip with abc" << endl;
    //     }
    // }else if(savings>2000){
    //     cout << "pqr" << endl;
    // }else{
    //     cout << "xyz" << endl;
    // }






// greatest of 3 numbers
    // int a,b,c;
    // cin >> a >> b >> c;
    // if(a>b && a>c){
    //     cout<< a<<" is the greatest" << endl;
    // }else if(b>c){
    //     cout << b << " is the greatest" << endl;
    // }else{
    //     cout<< c<< " is the greatest" << endl;
    // }





// divisiblity by 2 i.e odd or even
    int n;
    cin >> n;
    if(n%2 == 0){
        cout << n << " is even number " << endl;
    }else{
        cout << n << " is odd number" << endl; 
    }
    return 0;
}