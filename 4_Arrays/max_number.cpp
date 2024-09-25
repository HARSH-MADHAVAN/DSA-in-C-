#include<iostream>
#include<climits>

using namespace std;

int main(){
    int arr[] = {2, 40, 1, 6, 8, 9, 0};
    int size = 7;
    int maxNum = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
    }
    cout<<"Maximum number is "<<maxNum;
}