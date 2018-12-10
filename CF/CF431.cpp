#include <bits/stdc++.h>
using namespace std;
int a[5],ans;
string s;
int main(){
   // cin.sync_with_stdio(0);cin.tie(0);cout.tie(0);
  for(int i=1 ; i<=4 ;i++)scanf("%d",&a[i]);cin>>s;
  int n = s.size();
  for(int i=0 ; i<n ;i++){
    ans = ans+ a[(int)s[i]-'0'];
  }
  printf("%d\n",ans);
}
