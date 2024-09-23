#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int arr[n];

// Take input of the array to be Searched
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

// Take input for the element to be found
	int target;
	cin >> target;

// Apply linear search technique
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == target){
			cout << "Target found at position "<< i << endl;
		}
	}
	return 0;

}