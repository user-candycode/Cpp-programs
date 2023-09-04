#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1{55,22,77,44,66,99,88,11,33,99};
    {
        list<int>:: iterator it = l1.begin();
        while(it!=l1.end()){
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
    }
    l1.sort();
    {
        list<int>::iterator q = l1.begin();
        while(q!=l1.end()){
            cout<<*q<<" ";
            q++;
        }
        cout<<endl;
    }
    l1.reverse();
    {
        list<int>::iterator p = l1.begin();
        while(p!=l1.end()){
            cout<<*p<<" ";
            p++;
        }
        cout<<endl;
    }


    return 0;
}