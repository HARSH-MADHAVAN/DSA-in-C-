#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;


	int arr[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int target;
	cin >> target;

	int start = 0;
	int end = n - 1;
	int mid;
	int ans = n;

	while (start<=end){
		mid = (start + end) / 2;
		if (arr[mid] == target){
			ans = mid;
			break;
		}

		else if (arr[mid] > target)
		{
			end = mid - 1;
		}

		else{
			start = mid + 1;
		}
	}
	
	cout << ans << endl;
	return 0;
	 
}