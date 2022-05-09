#include<iostream>

using namespace std;

int main(void){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif



// sum of 0 to n numbers
    int n;
    cin >> n;

    int sum = 0;
    for(int counter =1 ; counter<=n;counter++){
        sum += counter;
    }

    cout<< sum <<" is sum of 0 to " <<n<<" numbers."<<endl;
    return 0;
}