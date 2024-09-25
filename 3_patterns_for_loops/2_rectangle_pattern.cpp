#include<iostream>
using namespace std;
 int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter number of columns : ";
    cin>>m;
    cout<<endl;

    for (int rows=1;rows<=n;rows=rows+1){
        for (int col=1;col<=m;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }
 }