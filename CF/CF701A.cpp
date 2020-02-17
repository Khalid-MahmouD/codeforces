 /*
    URL = http://codeforces.com/contest/701/problem/A
    author : khaled mahmoud
 */

#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int>p[101];
int main() {
   int n;
   cin >> n;
   for (int i = 1;i <= n;++i) {
       int x;
       cin >> x;
       p[i].first = x;
       p[i].second = i;
   }
   sort(p + 1, p + 1 + n);

   for (int i = 1;i <= n/2 ;++i) {
       cout << p[i].second << " " << p[n - i + 1].second << endl;
   }
}
