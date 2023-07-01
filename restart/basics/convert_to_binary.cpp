#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    // binary to decimal
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
    


    return 0;
}
