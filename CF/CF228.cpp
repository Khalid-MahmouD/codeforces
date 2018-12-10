#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll s1,s2,s3,s4,cnt;
int main(){
  scanf("%lld%lld%lld%lld",&s1,&s2,&s3,&s4);
  if(s1==s2||s1==s3||s1==s4)cnt++;
  if(s2==s3||s2==s4)cnt++;
  if(s3==s4)cnt++;
  printf("%lld\n",cnt);
}
