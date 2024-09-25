#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<endl;

    for(int row=0;row<n;row=row+1){
        for(int col=0;col<row+1;col=col+1){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}