// Find the unique element (element which occurs only once)
// i/p -> {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4} 
#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;
    // zor all elements 
    for(int i=0; i<arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array: " << endl;
    cin>>n;

    vector<int> arr(n);
    cout<< "Enter the elements "<< endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement =findUnique(arr);

    cout<<"Unique Element is "<< uniqueElement<<endl;


    return 0;
}