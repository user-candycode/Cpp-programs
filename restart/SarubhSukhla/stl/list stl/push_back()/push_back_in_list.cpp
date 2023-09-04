#include<iostream>
#include<list>

using namespace std;

int main(){
    list<string> l2 {"Delhi","Punjab","Mumbai","Kashmir"};

    // inserting data to a list
    l2.push_back("Bhopal");
    l2.push_front("Karachi");

    list<string>:: iterator it = l2.begin();
    while(it!=l2.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    cout<<"Total values in the list are: "<<l2.size();
    return 0;
}