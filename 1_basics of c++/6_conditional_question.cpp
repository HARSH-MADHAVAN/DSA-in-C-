#include<iostream>
using namespace std;

// Check whether the character is uppercase, lowercase or numeric in nature

int main(){
    char ch;
    int ascii;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    ascii = ch;
    cout<<endl;

    if(65<=ascii && ascii<=90){
        cout<<"This is uppercase albhabet"<<endl;
    }
    else if(97<=ascii && ascii<=122){
        cout<<"This is lowercase albhabet"<<endl;
    }

    else{
        cout<<"This is numeric in nature"<<endl;
    }

}