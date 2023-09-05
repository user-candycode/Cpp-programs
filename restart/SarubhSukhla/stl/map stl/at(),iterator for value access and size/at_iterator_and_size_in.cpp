#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> customer;
    customer[100] = "Gazinder";
    customer[123] = "dilip";
    customer[145] = "aditya";
    customer[171] = "shahid";
    customer[200] = "Rajesh";

    map<int,string> c{ {100,"Gazinder"},{123,"dilip"} };

    // printing the values of map
    {
        cout<<customer[100]<<endl;
        cout<<customer[123]<<endl;
    }
    cout<<endl;
    {
        map<int,string>::iterator p = customer.begin();
        while (p!=customer.end())
        {
            cout<<p->first<<" : ";
            cout<<p->second<<endl;
            p++;
        }
    }
    cout<<endl;
    {
        cout<<customer.at(145)<<endl;
    }
    cout<<endl;
    {
        cout<<"customer map size:\t"<<customer.size()<<endl;
    }
    cout<<endl;
    {
        cout<<"Is map empty: "<<customer.empty()<<endl;
    }
    cout<<endl;
    {
        // insert 
        customer.insert(pair<int,string> (205,"MrK"));
    }
    cout<<endl;
    {
        map<int,string>::iterator p = customer.begin();
        while (p!=customer.end())
        {
            cout<<p->first<<" : ";
            cout<<p->second<<endl;
            p++;
        }
    }
    cout<<endl;
    {
        customer.clear();
    }
    cout<<endl;
    {
        map<int,string>::iterator p = customer.begin();
        while (p!=customer.end())
        {
            cout<<p->first<<" : ";
            cout<<p->second<<endl;
            p++;
        }
        cout<<"customer map size:\t"<<customer.size()<<endl;
        cout<<"Is map empty: "<<customer.empty()<<endl;
    }
    return 0;
}