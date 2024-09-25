#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;
    
    for(int row=1;row<=n;row=row+1){
        for(int col=1;col<=n;col=col+1){
            cout<<"*";
        }
        
    cout<<endl;
    }
}
// number of rows = number of columns