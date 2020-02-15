///*
//		URL  : http://codeforces.com/contest/53/problem/A
//		Author : Khalid Mahmoud
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n;
//string s1[105];
//vector<string>v;
//int main() {
//	string s;
//	cin >> s >> n;
//	for (int i = 0; i < n; ++i) {
//		cin >> s1[i];
//		if (s1[i] == s) {
//			cout << s << "\n";
//			return 0;
//		}
//	}
//	bool flag = 0;
//	for (int j = 0; j < n; ++j) {
//		for (int i = 0;i < s.size();++i) {
//			if (s1[j][i] == s[i])
//				flag = 1;
//			else {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//			v.push_back(s1[j]);
//	}
//	if (v.empty()) { cout << s << endl; return 0; }
//	sort(v.begin(), v.end());
//	cout << v[0] << endl;
//
//   return 0;
//}