#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,0,1,0,1,0,1,1,1,0,1,0,0,0,1,1,1,1,0,1};
    int size = 20;

    int numZero = 0;
    int numOne = 0;

    for (int i=0; i<20; i++){
        if(arr[i]==0){
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }
    }

    cout << "number of zeroes are "<<numZero<<endl;
    cout << "number of ones are "<<numOne<<endl;
}