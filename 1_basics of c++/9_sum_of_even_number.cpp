#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    int i=0;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+2;
    }

    cout<<"The sum of even numbers from 0 to "<<n<<" is"<<sum<<endl;
}