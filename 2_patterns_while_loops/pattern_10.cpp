#include<iostream>
using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a  number :";
//     cin>>n;

//     int i=1;
//     while(i<=n) {
//         int j=1;
//         while(j<=i) {
//             cout<<i+j-1<<" ";
//             j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//     }
// }

// another method

int main() {
    int n;
    cout<<"Enter a  number :";
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1 , value=i;
        while(j<=i) {
            cout<<value<<" ";
            j=j+1;
            value=value+1;
    }
    cout<<endl;
    i=i+1;
    }
}