/*
    URL : https://codeforces.com/problemset/problem/1304/A
    author : khaled mahmoud
*/
#include<iostream>
#define ll long long
using namespace std;
int n;
int main() {
	cin >> n;
	while (n--) {
		ll x, y, a, b, ans = 0;
		cin >> x >> y >> a >> b;
		ll d = y - x;
		ll s = a + b;
		d% s ? cout << -1 << endl : cout << d / s << endl;
	}
	return 0;
}
