#include<iostream>
#include "logic.h"

using namespace std;

int main()
{
    // cout << "it worked" << endl;
    string filename;
    char mode;

    cout<<"enter a file name with extension: "<<endl;
    getline(cin >>  std::ws,filename);

    while(true)
    {
        cout<<"Encrypt (e) or Decrypt (d) or Exit (q)?"<<endl;
        cin>>mode;

        if (mode == 'q')
        {
            exit(0);
        }
        if (mode == 'e' || mode == 'E' || mode == 'd' || mode == 'D')
        {
            if (mode == 'e' || mode == 'E')
            {
                if (encryptFile(filename,true) )
                {
                    cout<<"Encryption completed successfully."<<endl;
                }
                else
                {
                    cerr<<"Error: Unable to encrypt"<<endl;
                }
            }
            if (mode == 'd' || mode == 'D')
            {
                if (encryptFile(filename,false) )
                {
                    cout<<"Decryption completed successfully."<<endl;
                }
                else
                {
                    cerr<<"Error: Unable to decrypt"<<endl;
                }
            }
            break;
        }  
        else
        {
            cerr<<"Invalid mode selected\nTry:"<<endl;
        }
    }

    return 0;
}

