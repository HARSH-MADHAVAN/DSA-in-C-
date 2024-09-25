#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<endl;

// PYRAMID
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
    
// INVERSE PYRAMID
     for (int row=0; row<n; row=row+1){
        // spaces
        for(int col=0;col<row;col=col+1){
            cout<<"  ";
        }
        // Stars
        for( int col=0;col<n-row;col=col+1){
            cout<<"*   ";
        }
        cout<<endl;
    }
}