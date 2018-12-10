#include<bits/stdc++.h>
using namespace std;
char s[55],t[55];
int main(){
  scanf("%s%s",s,t);
  int i=0 ;
  int n=strlen(t);
  for(int j=0 ; j < n ; j++){
    if(s[i]==t[j])i++;
  }
  printf("%d\n",i+1);
}
