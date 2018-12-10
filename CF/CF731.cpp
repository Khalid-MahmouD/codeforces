#include<bits/stdc++.h>
using namespace std;
char s[105];
int a;
int main(){
  scanf("%s",s);
  char it ='a';
  int  n  =strlen(s);
  for(int i=0 ; i<n ;i++){
  a+=min(26-abs(s[i]-it),abs(s[i]-it));
  it=s[i];
  }
  printf("%d\n",a);
}
