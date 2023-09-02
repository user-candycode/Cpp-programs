#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(10*(i+1));
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i];
        if(i<(v1.size()-1)){
            cout<<",";
        }
    }

    {
        cout<<endl;
        // appending values in between of a vector
        vector<int>::iterator it = v1.begin();
        v1.insert(it,999); //add the value at the begining
        for (int i = 0; i < v1.size(); i++)
        {
            cout<<v1[i];
            if(i<(v1.size()-1)){
                cout<<",";
            }
        }
    }

    {
        cout<<endl;
        // appending values in between of a vector
        vector<int>::iterator it = v1.begin();
        v1.insert(it+2,999); //add the value at the begining
        for (int i = 0; i < v1.size(); i++)
        {
            cout<<v1[i];
            if(i<(v1.size()-1)){
                cout<<",";
            }
        } 
    }
    
    
    return 0;
}