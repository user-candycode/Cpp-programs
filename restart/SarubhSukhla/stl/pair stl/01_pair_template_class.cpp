#include<iostream>

using namespace std;

class student{
    private:
        string name;
        int age;
    public:
        void setStudent(string s,int a){
            name=s;
            age=a;
        }
        void showStudent(){
            cout<<"Name:"<<name<<" ";
            cout<<"Age:"<<age<<endl;
        }
};

int main(){
    pair<string,int> p1;
    pair<string, string>p2;
    pair<string,float>p3;
    pair<int,student> p4;

    p1 = make_pair("Rahul",16);
    p2 = make_pair("India","New Delhi");
    p3 = make_pair("Drilling C++",134.5f);
    student s1;
    s1.setStudent("Aishwarya",19);
    p4 = make_pair(1,s1);
    cout<<"Pair 1:"<<endl;
    cout<<p1.first<<" | "<<p1.second<<endl;
    cout<<"Pair 2:"<<endl;
    cout<<p2.first<<" | "<<p2.second<<endl;
    cout<<"Pair 3:"<<endl;
    cout<<p3.first<<" | "<<p3.second<<endl;
    cout<<"Pair 4:"<<endl;
    cout<<p4.first<<" | ";
    student s2 = p4.second;
    s2.showStudent();
    return 0;
}

// Syntax: pair<T1,T2> pair1;
// eg. pair<string,int> p1;
// uses make_pair() // to insert values // eg p1 = make_pair("rahul",16);