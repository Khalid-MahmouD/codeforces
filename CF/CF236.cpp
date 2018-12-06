#include <bits/stdc++.h>
using namespace std;
set< int,greater<int> >ss;
string s;
int main(){
  cin>>s;
  int n=s.size();
  for(int i=0 ; i < n; i++){
        ss.insert(s[i]);
  }
  int nn=ss.size();
  printf("%s\n",(nn%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
}
