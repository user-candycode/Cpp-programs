#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 234;
    // find sum and product of digits of number
    int digit;
    int sum =0 ,mul=1;
    while (n>0)
    {
        digit = n%10;
        n = n/10;
        cout<<"digit:\t "<<digit<<" n:\t "<<n<<endl;
        sum = sum + digit;
        mul = mul * digit;
    }
    cout<<endl;
    cout<<"sum:\t "<<sum<<" mul:\t "<<mul<<endl;
    return 0;
}
