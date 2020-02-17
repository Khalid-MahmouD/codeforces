/*
  URL : http://codeforces.com/contest/75/problem/A
  author : khaled mahmoud
*/
#include<iostream>
using namespace std;

	int rmz(int x) {
		int ret = 0, ten = 1;
		while (x) {
			int dig = x % 10;
			x /= 10;
			if (dig) {
				ret += dig * ten;
				ten *= 10;
			}
		}
		return ret;
	}
	int main() {
		int a, b, c;
		cin >> a >> b;
		c = a + b;

		a = rmz(a);
		b = rmz(b);
		c = rmz(c);
		//cout << a << " " << b<< " " << c << endl;
		if (a + b == c)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
