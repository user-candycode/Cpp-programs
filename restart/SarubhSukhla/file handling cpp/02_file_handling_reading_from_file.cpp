#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("myfile.dat");
    char ch;
    // now ch have all data from myfile,dat
    // fin>>ch;// note this >> operator while reading from file will skip space tabs and new line 
    ch = fin.get(); // solves the space skipping problem
    // now to display the data read from myfile.dat 
    while (!fin.eof())
    {
        cout<<ch;
        // fin>>ch;   
        ch = fin.get();
    }
    fin.close();
    return 0;
}



