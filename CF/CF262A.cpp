/*
    URL : https://codeforces.com/problemset/problem/262/A
    author: kahled mahmoud
*/
#include<iostream>
#define in cin
#define out cout
using namespace std;
bool lucky(int a, int k) {
	int c = 0;
	while (a) {
		if (a % 10 == 4 || a % 10 == 7)c++;
		a /= 10;
	}
	if (c <= k)return 1;
	return 0;
}
int main() {
	int n, k, a[1005] = {0};
	in >> n >> k;
	int res = 0;
	for (int i = 0; i < n;++i) {
		int x;
		in >> x;
		res += lucky(x, k);
	}
	out << res << "\n";
}
