#include<iostream>

using namespace std;


// continue is used to skip to the next iteration of that loop.
// break statement is used to terminate the closest scoped loop.
int main(void){


//going out on odd days 
    // for(int date=1; date<=30;date++){
        
    //     int pcktmny=3000;
    //     if(date%2==0){
    //         continue;
    //     }
    //     if(pcktmny <= 0){
    //         break;
    //     }
    //     cout << "Go out today!:" << date << endl;
    //     pcktmny = pcktmny - 300;
    // }



//numbers 0 to 100 excluding numbers divisible by 3 
    for(int i=0; i<100; i++){
        if(i%3==0){
            continue;
        }else{
            cout << i << endl;
        }
    }

    return 0;
}