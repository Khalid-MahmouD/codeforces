/*
  url: http://codeforces.com/contest/300/problem/A
  author: khaled mahmoud
*/

#include<iostream>
#include<algorithm>
using namespace std;
int arr[105], n;
int main() {
	cin >> n;
	for (int i = 0;i < n;++i)
		cin >> arr[i];
	sort(arr, arr + n);
	// -ve
	cout << "1 " << arr[0] << endl;

	if ( arr[n - 1] > 0) {
		// +ve
		cout << "1 " << arr[n - 1] << endl;

		//zero
		cout << n - 2 << " ";
		for (int i = 1;i < n-1;++i)
			cout << arr[i] << " ";
	}
	else { // it now zero for sure;
		// +ve
		cout << "2 " << arr[1] << " " << arr[2] << endl;

		// zero
		cout << n - 3 << " ";
		for (int i = 3;i < n;++i)
			cout << arr[i] << " ";
	}


	return 0;
}
