#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<endl;

    for(int row=0;row<n;row=row+1){
// loop for spaces
        for(int col=0;col<n-row-1;col=col+1){
            cout<<"  ";
        }
// loop for star
        for(int col=0;col<row+1;col=col+1){
            cout<<"*   ";
        }
        cout<<endl;
    }
}