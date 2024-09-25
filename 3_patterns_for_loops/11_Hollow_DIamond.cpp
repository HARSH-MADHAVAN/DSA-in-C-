#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<endl;
// hollow diamond
    for (int row=0; row<n; row=row+1){
        // for spaces
        for (int col=0; col<n-row-1; col=col+1){
            cout<<" ";
        } 
        // For stars
        for(int col=0; col<2*row+1; col=col+1){
            // if first character
            if(col == 0 || col ==2*row){
                cout<<"*";
            }
        
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
} 