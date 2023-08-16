#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("myfile.dat",ios::app|ios::binary);  // by default output mode i.e ios::out
    
    // note to write special as it is we use binary mode to write 

    return 0;
}