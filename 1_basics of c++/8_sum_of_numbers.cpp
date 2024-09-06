#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+1;

    }
    cout<<"Sum of the numbers from 1 to "<<n<<" is "<<sum<<endl;
}
