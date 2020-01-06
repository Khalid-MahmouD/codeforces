#include<iostream>
#define in cin
#define out cout
using namespace std;
int a[105][105];
int main() {
	int n, k;
	in >> n >> k;
	for (int i = 0; i < n;++i)
		a[i][i] = k;
	for (int i = 0;i < n;++i){
		for (int j = 0;j < n;++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}