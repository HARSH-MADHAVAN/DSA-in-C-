#include<iostream>
#include<climits>

using namespace std;

int main(){
    int arr[] = {2, 5, 8, 9, 10, 25, 24, 3, -5};
    int size = 9 ;
    int minNum = INT_MAX;
     for(int i=0; i<size; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    cout<<"The minimun number in the array is "<<minNum;
}