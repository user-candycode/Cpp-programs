#include<iostream>

using namespace std;

template<class X1>  // generic class
class ArrayList{    // generic class
    private:
        struct ControlBlock{
            X1 capacity;
            X1 *arr_ptr;
        };
        ControlBlock *s; // pointer variable of the structure above
    public:
        ArrayList(int capacity){
            s=new ControlBlock; // s is a pointer to the structure
            s->capacity=capacity;
            s->arr_ptr=new X1[s->capacity];
        }
        void addElement(int index,X1 data){
            if(index>=0 && index<=(s->capacity-1)){
                s->arr_ptr[index] = data;
            }else{
                cout<<"\nArray index is not valid"<<endl;
            }
        }
        void viewElement(int index,X1& data){
            if(index>=0 && index<=(s->capacity-1)){
                data = s->arr_ptr[index];
            }else{
                cout<<"\nArray index is not valid"<<endl;
            }
        }
        void viewList(){
            int i;
            for(i=0;i<s->capacity;i++){
                cout<<" "<<s->arr_ptr[i];
            }
        }
};

int main(){
    int data;
    ArrayList <int>list1(4); // usingtemplate you have to mention class X1 data type
    list1.addElement(0,32);
    list1.addElement(1,42);
    list1.addElement(2,23);
    list1.viewElement(0,data);
    cout<<"value in the array is: "<<data<<endl;
    cout<<"view list :";
    list1.viewList();
    return 0;
}