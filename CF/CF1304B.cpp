#include<iostream>
#include<algorithm>
#include<vector>
#define all(x) ((v).begin(), (v).end())
#define sz(v) ((int)(v.size()))
using namespace std;
string s[109], center = "";
int n, m;
bool f[109];
vector<pair<string, string>>v;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		string temp = s[i];
		reverse(temp.begin(), temp.end());
		if (temp == s[i]) {
			center = s[i];
		}
	}
	for (int i = 0;i < n;++i) {
		string temp = s[i];
		reverse(temp.begin(), temp.end());
		for (int j = i+1; j < n; ++j) {
			if (s[j] == temp && !f[j]) {
				f[j] = 1;
				v.push_back({ s[i], temp });
			}
		}
	}
	string ans = "";
	for (int i = 0;i < v.size();++i) {
		ans = ans + v[i].first;
	}

	ans += center;

	for (int i = v.size()-1;i >=0 ;--i) {
		ans += v[i].second;
	}
	cout << ans.length() << endl;
	cout << ans << endl;
	return 0;
}