#include <iostream>
using namespace std;

int main() {
  int size = 0;
  
  int a = 123;
  cout << "a: "<<a<<endl;
  size = sizeof(a);
  cout << "size of int a is: "<<size<<endl;
  
  char b = 'b';
  cout << "b: "<<b<<endl;
  size = sizeof(b);
  cout << "size of char b is: "<<size<<endl;

  float c = 12.5;
  cout << "c: "<<c<<endl;
  size = sizeof(c);
  cout << "size of float c is: "<<size<<endl;
  
  double d = 12.5;
  cout << "d: "<<d<<endl;
  size = sizeof(d);
  cout << "size of double d is: "<<size<<endl;
  
  bool e = true;
  cout << "e: "<<e<<endl;
  size = sizeof(e);
  cout << "size of bool e is: "<<size<<endl;
  
return 0;
}
