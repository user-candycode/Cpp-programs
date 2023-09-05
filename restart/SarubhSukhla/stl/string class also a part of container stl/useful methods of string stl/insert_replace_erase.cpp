#include<iostream>
#include<string>
using namespace std;

int main(){
    {
        /*
            assign()
            append()
            insert()
            replace()
            erase()
            find()
            rfind()
            compare()
            c_str()
            size()
        */
    }
    string s1 = "Hello";
    {
        // inser01_usefulmethods_stringt to inject a string at some index
        s1.insert(2,"123");
        cout<<s1<<endl;
    }
    cout<<endl;
    {
        //replace starting from index and upto how many places
        s1.replace(2,2," ");
        //    index^ ^length
        cout<<s1<<endl;
    }
    cout<<endl;
    {
        // erase function
        s1.erase();
        cout<<"if below this empty:"<<endl;
        cout<<s1<<endl;
        cout<<"Then the string is empty"<<endl;
    }
    

    return 0;
}