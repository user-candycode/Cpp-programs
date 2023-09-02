#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1; // blank vector
    vector<int> v2 = {1,2,3,4,5};
    vector<int> v3 {9,8,7,6};
    // implicitely deciding the size of vector at initilization
    vector<int> v4(4); // 4 length ka vector
    // implicitely deciding the size and default values of vector at initilization
    vector<int> v5(5,10); // 5 length ka vector with 5times 10 inside it
    
    {
        vector<string> v4(3,"hello");
        // printing v4
        cout<<v4[0]<<endl;
        cout<<v4[1]<<endl;
        cout<<v4[2]<<endl;
        cout<<endl;
        // printing v4 using for loop
        for (int i = 0; i < 3; i++)
        {
            cout<<v4[i]<<endl;
        }
        

    }
    


    return 0;
}