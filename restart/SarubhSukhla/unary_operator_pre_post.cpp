#include<iostream>

using namespace std;

class Class_Named_Integer{
    private:
        int x;
    public:
        void set_data(int a){
            x=a;
        }
        void show_data(){
            cout<<"x: "<<x<<endl;
        }

        // pre increment
        Class_Named_Integer operator++(){  // by default preincrement works
            Class_Named_Integer i;
            i.x=++x;
            return i;
        }

        Class_Named_Integer operator++(int){ // post increment autamatically see int as argument and uses this function
            Class_Named_Integer i;
            i.x = x++;
            return i;
        }
};

int main(){
    Class_Named_Integer i1,i2;
    i1.set_data(3);
    cout<<"before pre increment"<<endl;
    i1.show_data();
    i2 = i1++; // or i2 = i1.operator++();
    cout<<"after pre increment"<<endl;
    i1.show_data();
    i2.show_data();
    return 0;
}


// operator++() and operator++(int) compiler see them different and hence compile time polymorphism is possible