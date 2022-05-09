#include<iostream>

using namespace std;

int main(void){

//my solution
//     int n;
//     cin >> n;
//     int rows =n;
//     int columns= 2*n -1;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=columns;j++){
//             if( j<=(n-i) || j>=(n+i) ){
//                 cout<< " ";
//             }else{
//                 cout<< "*";
//             }
//         }
//         cout<< endl;

//     }





//neso accademy solution
    int n,i,j;
    cin>> n;

    for(i=1;i<=n;i++){
        for(j=1; j<=2*n-1; j++){
            if( j>=n-(i-1) && j<=n+(i-1) ){
                cout<< "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}