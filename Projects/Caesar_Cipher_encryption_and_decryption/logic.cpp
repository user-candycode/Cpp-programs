#include "logic.h"
#include <fstream>
#include <cctype>

using namespace std;

bool performCeserCipher(string& content,bool encrypt)
{
    int shift=encrypt ? 3:-3; // if encrypt variable true then it shifts the characters by 3 hence encryption  or if encrypt is false then it will -shift by -3  hence decryption 
    for (char& ch:content) // read as a reference into varible ch belonging to content which is a temp string buffer that holds the entire data of file
    {
        if(isalpha(ch)) // isalpha is from library cctype
        {
            char base=isupper(ch)?'A':'a';
            ch = static_cast<char>( ( (ch-base+shift)%26 ) +base);
        }
    }
    return true;
}

bool encryptFile(const string& filename, bool encrypt)
{
    ifstream inFile(filename);
    if(!inFile)
    {
        return false;
    }
    // read the content of the file
    string content( (istreambuf_iterator<char>(inFile)),{} );
    inFile.close();

    if (performCeserCipher(content, encrypt) )
    {
        // create an o/p file and write the modified content
        ofstream outfile(encrypt ? "encrypted_" + filename : "decrypted_" + filename);
        if(!outfile)
        {
            return false;
        }
        else
        {
            outfile << content;
        }
        
        outfile.close();
        return true;
    }
    return encrypt;
}
