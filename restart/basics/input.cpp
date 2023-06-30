#include <iostream>

using namespace std;

int main()
{
    /*
    // below code will never print unless cin is complete
    int n;
    cin>>n;
    cout << "hello world"<<endl;
    */

    /*
    //below code is for simple single input
     int a;
     cin>>a;

     if(a>0){
         cout<<"a is +ive"<<endl;
     }else{
         cout<<"a is -ive"<<endl;
     }
    */

    /*
      //multiple input to show that cin uses spaces, enter and tabs for next consecutive input
      int a,b;
      cin >> a >> b;
      cout<< "Value of a and b are: " << a << " and " << b;
    */

    /*
    // the cin does not read "_" spaces, "\t" tabs, and "\n" enter to use this we use cin.get(), shown below
     int a, b;
     // the cin.get() picks up only the first character on console
     a = cin.get();
     // I/N a='1' for int data type a the character '1' has integer ascii table value of 49
     cout << "value of a is: " << a << endl;
    */

    /*
    //simple code of printing greatest of two input numbers

    int a , b;
      //below code will cout and cin on same line
      cout<<"Enter the value of a: ";
      cin >> a;
      cout<<"Enter the value of b: ";
      cin>>b;

      if(a>b){
          cout<<"A is greater"<<endl;
      }else{
          cout<<"B is greater"<<endl;
      }
    */

    /*
    // check weather the number is a positive negative or zero to teach else if
    int a;
    cout<<"Enter a number:\t";
    cin>>a;

    if(a>0){
        cout<<"The inputed number is a +ive number";
    }else{
        if(a<0){
            cout<<"The inputed number is a -ive number"<<endl;
        }else{
            cout<<"The inputed number is a zero"<<endl;
        }
    }
    */

    /*
    // USE OF ELSE IF
    int a = 24;

    if (a>20){
        cout<<"first exit";
    }
    else if(a==24){
        cout<<"second Exit";
    }
    else{
        cout<< "third exit";
    }
    */

   

    cout << "\n";
    return 0;
}