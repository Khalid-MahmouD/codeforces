#include<bits/stdc++.h>
using namespace std;
char s[60];
int n,c;
int main(){
  scanf("%d\n",&n);
  scanf("%s\n",s);
  for(int i=1 ; i<=n ; i++)if(s[i]==s[i-1])c++;
  printf("%d\n",c);
}
