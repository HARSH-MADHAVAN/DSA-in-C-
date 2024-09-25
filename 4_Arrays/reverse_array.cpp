#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int end = size-1;

    while(true){
        if(end<0){
            break;
        }
        cout<<arr[end]<<" ";
        end--;
    }
    return 0;
}