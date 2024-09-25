#include<iostream>
using namespace std;

// Question 1: Take 5 element i/p in array and print their doubles
// int main(){
//     int arr[5];
//     cout<<"Enter the value for the array ";
//     for (int i=0; i<5; i++){
//         cin>>arr[i];
//     }

//     cout<<"The doubles of the value is ";
//     for(int i=0; i<5; i++){
//         cout<<arr[i]*2<<" ";
//     }
//     return 0;
// }

// Question 1: Take 5 element i/p in array and print 1 for each input
int main(){
    int array[5];
    cout<<"Enter the values of the array ";
    for (int i=0; i<5; i++){
        cin>>array[i];
    }
    cout<<"output: ";
    for(int i=0; i<5; i++){
        array[i] = 1;
        cout<<array[i]<<" ";
    }
    return 0;
}