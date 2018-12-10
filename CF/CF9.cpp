#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
  scanf("%d %d",&a,&b);
  (a>b)?a=a:a=b;
  a = 6-a+1;
  int x = 6;
  if(a%6==0)a/=6,x/=6;
  if(a%3==0)a/=3,x/=3;
  if(a%2==0)a/=2,x/=2;
  printf("%d/%d\n",a, x);
}
