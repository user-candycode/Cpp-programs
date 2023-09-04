#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1 = {11,22,33};
    list<string> l2 {"Delhi","Punjab","Mumbai","Kashmir"};

    {
        // list is sequential, so it can only be accessed by using an itterator 
        list<int>:: iterator it = l1.begin();

        // now to access list data using this iterator
        while (it!=l1.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        cout<<"Total values in the list are: "<<l1.size();
    }
    

    {
        cout<<endl;
        // printing the data in l2
        list<string>:: iterator it = l2.begin();
        //now accessing the values in list 2
        while(it!=l2.end()){
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        cout<<"Total values in the list are: "<<l2.size();
    }
    return 0;
}

// Note: unlike vectors in list data is not randomly accessed rather its sequentially accessed likelinked list
// list class support a biderictional, linear list 
// list can be accessed from front to back or back to front