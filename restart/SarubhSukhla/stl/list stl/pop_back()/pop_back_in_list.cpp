#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1 = {11,22,33,44};
    {
        
        l1.pop_back();
        list<int>:: iterator it = l1.begin();
        // now to printing the list data using this iterator
        while (it!=l1.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        cout<<"Total values in the list are: "<<l1.size();
    
        
        cout<<endl;
        l1.pop_front();
        it = l1.begin();
        // now to printing the list data using this iterator
        while (it!=l1.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        cout<<"Total values in the list are: "<<l1.size();
    
    }
    return 0;
}