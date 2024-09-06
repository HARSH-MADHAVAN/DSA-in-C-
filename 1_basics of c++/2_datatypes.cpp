#include <iostream>
using namespace std;

int main(){
 // data types
    int a=123;
    cout<<a<<endl;

    char b='x';
    cout<<b<<endl;

    bool b1=false;
    cout<<b1<<endl;

    float f=1.2;
    cout<<f<<endl;

    double d=1.23;
    cout<<d<<endl;
// size of some data types
   int size1=sizeof(a);
   cout<<"size of int is: "<<size1<<"byte"<<endl;

   int size2=sizeof(b);
   cout<<"size of char is: "<<size2<<"byte"<<endl;

   int size=sizeof(f);
   cout<<"size of float is: "<<size<<"byte"<<endl;

// type casting
   int z='a';
   cout<<z <<endl;

   char y=98;
   cout<<y<<endl;  

   char x=123456;
   cout<<x<<endl;
   
// int ranging from o - (2^31 - 1)
   unsigned int g=123;
   cout<<g<<endl;
}