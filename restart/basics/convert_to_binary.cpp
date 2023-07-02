#include<iostream>
#include<math.h>
using namespace std;

int find_2scomp(int x){
    x = (~x);
    x= x+1;
    return x;
}


int main(int argc, char const *argv[])
{   
    /*
        // decimal to binary
    int n;
    n=5;

    int answer =0;
    int i=0;
    while (n!=0)
    {
        int bit = (n & 1);
        answer = answer + ( bit * pow(10, i) );

        n=(n>>1);
        i++;
    }

    cout<<answer<<endl;
    */
    
    

    //below code does not work
    // negative decimal to binary

    int n= -6;
    int bin = 0;
    if(n<0){        

        int answer = 0;
        int i=0;
        while (n!=0)
        {
            int bit = (n & 1);
            answer = answer + ( bit * pow(10, i) );

            n=(n>>1);
            i++;
        }

        cout<<answer<<endl;

    
    
        n = (-n);
        // cout<<n;
        n = find_2scomp(n); 
    }
    
    cout <<"\n";
    return 0;
}


