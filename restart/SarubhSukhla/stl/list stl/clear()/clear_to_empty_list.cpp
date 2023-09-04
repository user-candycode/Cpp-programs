#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1{99,11,22,33,44,55,66,77,88,99};
    {
        list<int>::iterator it = l1.begin();

        while (it!=l1.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        cout<<"size of the list is: "<<l1.size();
    }
    l1.clear();
    {
        list<int>::iterator it = l1.begin();

        while (it!=l1.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        cout<<"size of the list is: "<<l1.size();
    }
    return 0;
}