#include<bits/stdc++.h>
using namespace std;
// int n,a;
// char x[100005];
// string s;
int main(){
  int n,a,b,x=0;
  scanf("%d\n",&n);
  for(int i=0 ; i < n ; i++){
    scanf("%d\n",&a);
    if(a!=b)x++;
    b=a;
  }
  printf("%d\n",x);
  // cin>>n;
  // for(int i=0 ; i<n ;i++){
  //   cin>>s;
  //     if(s[0]=='0');
  //         x[i]=s[0];
  // }
  // for(int i=1 ; i<=n ;i++){
  //   if(x[i]==x[i-1])continue;
  //   else a++;
  // }
  // cout<<a<<endl;
}
