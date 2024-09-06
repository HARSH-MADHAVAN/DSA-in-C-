#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;

    if(n>0){
        cout<<"The number is positive";
    }

    else{
        if(n<0){
            cout<<"The number is negative";
        }

        else{
            cout<<"The number is equal to 0";
        }
     cout<<endl;
    }

//Using if and else if instead of nested if else

  int x;
   cout<<"enter a number:"<<endl;
    cin>>x;

    if(x>0){
        cout<<"The number is positive";
    }

    else if(x<0){
        cout<<"The number is negative";
    }

    else {
        cout<<"The number is equal to 0";
    }

}