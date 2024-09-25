#include<iostream>
using namespace std;

int main(){
    int arr[10];          //Declaration of array
    cout<< arr << endl;   //printing the base address of the array
    cout<< &arr << endl;  //printing the base address of the array using &

    // initialization of array
    int array[] = {2, 4, 6, 8, 10, 12};
    int arra[5] = {2, 4, 6, 8, 10};
    int ar[10] = {2, 4, 6, 8, 10};  //rest of the 5 locations will store 0
    cout<<"Array initialization successfull" << endl;
}