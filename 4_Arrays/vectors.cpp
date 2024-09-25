#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Create a vector
    vector<int> arr{};

    int ans = (sizeof(arr)/sizeof(int));
    cout<< ans<< endl;

    cout<< arr.size()<<endl;
    cout<< arr.capacity()<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 // Static Vector
    vector<int> brr(10, 105);
    cout<<"size of b "<<brr.size()<<endl;
    cout<<"Capacity of b "<<brr.capacity()<<endl;

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

 //Dynamic vector
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> brrr(n, 11);
    cout<<"size of b "<<brrr.size()<<endl;
    cout<<"Capacity of b "<<brrr.capacity()<<endl;

    for(int i=0; i<brrr.size(); i++){
        cout<<brrr[i]<<" ";
    }
    cout<<endl;

 //Vector with elemnets
    cout<<"Printing crr"<<endl;
    vector<int> crr{10, 20, 30, 40, 50};

    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector crr is not empty or not?   "<<crr.empty()<<endl;


    return 0;
}