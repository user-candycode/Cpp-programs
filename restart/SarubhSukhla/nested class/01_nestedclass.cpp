#include<iostream>
#include<string.h>

using namespace std;

class Student{
    private:
        int rollno;
        char name[20];
        class Address{
            private:
                int houseno;
                char street[20];
                char city[20];
                char state[20];
                char pincode[7];
            public:
                void setAddress(int h,char *s,char *c,char *st,char *p){
                    houseno=h;
                    strcpy(street,s);
                    strcpy(city,c);
                    strcpy(state,st);
                    strcpy(pincode,p);
                }
                void showAddress(){
                    cout<<houseno<<endl;
                    cout<<street<<" "<<city;
                    cout<<" "<<pincode<<endl;
                }
        };
        Address add;
    public:
        class empty_privateClass{

        };
        void setRollno(int r){
            rollno=r;   
        }
        void setName(char *n){
            strcpy(name,n);
        }
        void setAddress(int h,char *s,char *c,char *st,char *p){
            add.setAddress(h,s,c,st,p);
        }
        void showStudent(){
            cout<<"Student Data"<<endl;
            cout<<rollno<<" ";
            cout<<name<<" ";
            add.showAddress();
        }
};

int main(){
    Student::empty_privateClass obj;
    Student s1;
    s1.setRollno(100);
    s1.setName("Rahul");
    s1.setAddress(301,"hunaman gali","bhopal","403928","MP");
    s1.showStudent();
    return 0;
}

// class class inside a class
// A nested class is a member and as such has the same access rights as any other member
// the member of an enclosing class have no special access to members of a nested class, the usual access rules should be obeyed