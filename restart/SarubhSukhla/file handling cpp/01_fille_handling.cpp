#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("myfile.dat");
    fout<<"hello students";
    fout.close();
    return 0;
}


/*

       |->ostream-----|----->ofstream
       |       |      |----->ostream_withoutassign(cout)
       |       |
ios ---|       |->iostream->fstream
       |       |
       |       |      |---->istream_withoutassign(cin)
       |->istream-----|---->ifstream

*/