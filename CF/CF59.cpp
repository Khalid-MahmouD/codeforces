#include<bits/stdc++.h>
using namespace std;
string s;
int x,y;
int main(){
  cin>>s;
  int n=s.size();
  int y = count_if(s.begin(),s.end(),::isupper);
  int x = n - y;
  ( x >= y )? transform(s.begin(),s.end(),s.begin(),::tolower):
                            transform(s.begin(),s.end(),s.begin(),::toupper);
            cout<<s<<endl;
  }
